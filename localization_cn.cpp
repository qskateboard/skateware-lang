#ifndef LOCALIZATION_CN_H
#define LOCALIZATION_CN_H

#pragma once

#include <unordered_map>
#include <string>

inline std::unordered_map<std::string, std::string> getChineseTranslations() {
    return {
        // Auth Menu
        {"Login", "登录"},
        {"Password", "密码"},
        {"Auth", "授权"},
        {"Loading...", "载入中..."},
        {"Welcome back, ", "欢迎回来, "},
        {"Active subscriptions: ", "可用订阅: "},
        {"Join cp.skateware.win for cloud radar, resources and more!", "加入 cp.skateware.win 以获取云雷达、资源以及更多信息! "},
        {"Select cheat type below to load", "选择以下软件类型以加载"},
        {"Cheat version: ", "软件版本: "},
        {" Server Version: ", " 服务器版本: "},
        {"Regular Cheat", "普通版"},
        {"Global DMA Cheat", "国际服DMA版"},
        {"CN DMA Cheat", "国服DMA版"},

        {"Cant connect to server.", "无法连接至服务器."},
        {"Invalid login or password.", "登录无效或密码错误."},
        {"Invalid HWID.", "无效的 HWID."},
        {"Cant get cheat version.", "无法获取软件版本."},
        {"Cheat was updated. Restart loader", "软件已更新. 请重启软件"},
        {"Failed to download file. Download it on the official website.", "下载文件失败. 请从官方网站下载."},
        {"The update has been successfully installed. Close this application, delete the old build and start the new one with the file name: ", "更新安装成功. 请关闭此应用程序, 并删除旧版本, 然后使用文件名启动新版本: "},

        // Entity
        {"Chest", "箱子"},
        {"Gallow", "狂欢之椅"},
        {"Cipher", "密码机"},
        {"Pallet", "板子"},
        {"Dungeon", "地窖"},
        {"Cabinet", "柜子"},
        {"Crow", "乌鸦"},

        {"Lucky Guy", "幸运儿"},
        {"Doctor", "医生"},
        {"Lawyer", "律师"},
        {"Thief", "慈善家"},
        {"Gardener", "园丁"},
        {"Magician", "魔术师"},
        {"Explorer", "冒险家"},
        {"Mercenary", "佣兵"},
        {"Coordinator", "空军"},
        {"Mechanic", "机械师"},
        {"Robot", "机械玩偶"},
        {"Forward", "前锋"},
        {"The Minds Eye", "盲女"},
        {"Priestess", "祭司"},
        {"Perfumer", "调香师"},
        {"Cowboy", "牛仔"},
        {"Female Dancer", "舞女"},
        {"Seer", "先知"},
        {"Embalmer", "入殓师"},
        {"Prospector", "勘探员"},
        {"Enchantress", "咒术师"},
        {"Wildling", "野人"},
        {"Acrobat", "杂技演员"},
        {"First Officer", "大副"},
        {"Barmaid", "调酒师"},
        {"Postman", "邮差"},
        {"Gravekeeper", "守墓人"},
        {"Prisoner", "囚徒"},
        {"Entomologist", "昆虫学者"},
        {"Painter", "画家"},
        {"Batter", "击球手"},
        {"Toy Merchant", "玩具商"},
        {"Psychologist", "心理学家"},
        {"Patient", "病患"},
        {"Novelist", "小说家"},
        {"Little Girl", "小女孩"},
        {"Weeping Clown", "哭泣小丑"},
        {"Professor", "教授"},
        {"Antiquarian", "古董商"},
        {"Composer", "作曲家"},
        {"Journalist", "记者"},
        {"Aeroplanist", "飞行家"},
        {"Cheerleader", "拉拉队员"},
        {"Puppeteer", "木偶师"},
        {"Fire Investigator", "火灾调查员"},
        {"Faro Lady", "法罗女士"},
        {"Knight", "骑士"},

        {"Hell Ember", "厂长"},
        {"Smiley Face", "小丑"},
        {"Gamekeeper", "鹿头"},
        {"Ripper", "杰克"},
        {"Soul Weaver", "蜘蛛"},
        {"Geisha", "红蝶"},
        {"The Feaster", "黄衣之主"},
        {"Wu Chang", "宿伞之魂"},
        {"Black Wu Chang", "范无咎"},
        {"White Wu Chang", "谢必安"},
        {"Photographer", "摄影师"},
        {"Mad Eyes", "疯眼"},
        {"Dream Witch Follower", "梦之女巫信徒"},
        {"Dream Witch Main", "梦之女巫本体"},
        {"Axe Boy", "爱哭鬼"},
        {"Evil Reptilian", "孽蜥"},
        {"Bloody Queen", "红夫人"},
        {"Guard 26", "26号守卫"},
        {"Disciple", "使徒"},
        {"Violinist", "小提琴家"},
        {"Sculptor", "雕刻家"},
        {"Undead", "博士"},
        {"Broken Wheel State", "破轮车轮形态"},
        {"Broken Wheel", "破轮"},
        {"Naiad", "渔女"},
        {"Wax Artist", "蜡像师"},
        {"Nightmare", "噩梦"},
        {"Clerk", "记录员"},
        {"Electro Ball", "电磁球"},
        {"Hermit", "隐士"},
        {"Night Watch", "守夜人"},
        {"Opera Singer", "歌剧演员"},
        {"Opera Singer Shadow", "歌剧演员暗影"},
        {"Fool's Gold", "愚人金"},
        {"The Shadow", "时空之影"},
        {"The Yithian", "伊斯人"},
        {"Goatman", "跛脚羊"},
        {"Hullabaloo", "喧嚣"},
        
        { "Syringe", "镇静剂" },
        { "Map", "手绘地图" },
        { "Flashlight", "手电筒" },
        { "Toolbox", "工具箱" },
        { "Decoy", "魔术棒" },
        { "Explorer's Book", "游记绘本" },
        { "Iron Dash", "钢铁护肘" },
        { "Flaregun", "信号枪" },
        { "Controller", "遥控器" },
        { "Football", "橄榄球" },
        { "Perfume", "忘忧之香" },
        { "Lasso", "套索" },
        { "Magnet", "陨石磁铁" },
        { "Fast Music Box", "快节奏八音盒" },
        { "Slow Music Box", "慢节奏八音盒" },
        { "Fire Bomb", "黏土爆弹" },
        { "Sticky Bomb", "冷却爆弹" },
        { "Nitro Bomb", "燃烧爆弹" },
        { "Watch", "海神怀表" },
        { "Dovlin", "多夫林" },
        { "Shovel", "铁铲" },
        { "Net", "捕虫网" },
        { "Grappling Hooks", "钩爪" },
        { "Rocket", "火箭" },
        { "Mechanical Flute", "机关箫" },
        { "Crowbar", "撬棍" },
        { "Smoke Bottle", "烟雾瓶" },
        { "Black Mud", "黑色污泥" },
        { "Coldsnap Flask", "速冻瓶" },
        { "Telephone", "电话亭" },

        { "Coffin", "灵柩" },
        { "Mail Dog", "送信犬" },
        { "Painting", "画板" },
        { "Catapult", "弹射板车" },
        { "Cricket Ball", "板球" },
        { "Memory Fragment", "回忆碎片" },
        { "Flashlight", "强光手电" },
        { "Boar", "野猪" },
        { "Swarm of Bees", "虫群" },
        { "Professor's Scale", "教授鳞片" },
        { "Orpheus", "奥菲" },
        { "Inflatable Airbag", "石棉气囊" },

        { "Patroller", "巡视者" },
        { "Peeper", "窥视者" },
        { "Golem", "虚影" },
        { "Doll", "黄色傀儡" },
        { "Red Doll", "红色傀儡" },
        { "Trap", "陷阱" },
        { "Butterfly", "燕尾蝶" },
        { "Tentacle", "深渊之触" },
        { "Peaceful Pine", "安息松" },
        { "Branch", "树枝" },
        { "Mirror", "水镜" },
        { "Bomb", "炸弹" },
        { "Exploding Bomb", "爆炸的炸弹" },
        { "Cat Hint", "号令印记" },
        { "Cat", "使徒爱猫" },
        { "Statue", "雕像" },
        { "Knife", "象形坟场" },
        { "Harpoon", "鱼叉" },
        { "Nightmare's Crow", "噩梦渡鸦" },
        { "Remnant", "残影" },
        { "Shadow Cloak", "暗影披风" },
        { "Wall", "机关墙" },
        { "Camera", "照相机" },
        { "Console", "控制台" },
        { "Pickaxe", "矿镐" },
        { "Magnetic Rock", "磁场引石" },
        { "Corrupted Ostracon", "侵蚀陶片" },
        { "Cage of Lost Lambs", "迷失之笼" },

        // features
        { "Fire attack triggered on ", "鬼火攻击已触发于 " },
        { "Auto statue triggered on ", "自动雕像已触发于 " },
        { "Predicted Note", "预测音符" },
        { "Survivor on diagonal, auto-violinist triggered on ", "求生者处于对角线上, 自动提琴已触发于 " },
        { "Emergency shutdown of pallet dropping, possibly baited by hunter", "自动下板已被紧急停止, 监管者可能在尝试抽刀" },
        { "Forcibly dump the pallet, the hunter is standing in place in it", "自动下板已智能触发, 监管者正处于板子的范围中静止" },
        { "Dropped pallet on ", "自动下板已触发于 " },
        { " | Conditions: In Bounds(", " | 条件: 处于范围内(" },
        { ") Predicted(", ") 预测值("},
        { ") Antibaited(", ") 反抽刀("},
        { "Umbrella mark is under survivor, teleporting...", "伞标正处于求生者旁边, 正在传送..." },
        { "Waiting for the opponent to choose...", "等待对手选择..." },
        { "The opponent chose: ", "对手选择了: " },
        { "The first opponent chose: ", "第一个对手选择了: " },
        { "The second opponent chose: ", "第二个对手选择了: " },
        { "Hunter Indicator", "监管者指示器" },
        { "%s [Cooldown: %d sec]", "%s [冷却: %d 秒]" },
        { "%s [Ready]", "%s [准备就绪]" },
        { "Listen", "聆听" },
        { "Abnormal", "失常" },
        { "Excitement", "兴奋" },
        { "Patroller", "巡视者" },
        { "Teleport", "传送" },
        { "Peeper", "窥视者" },
        { "Blink", "闪现" },
        { "Warp", "移形" },
        { "Flywheel", "飞轮效应" },
        { "Tide Turner", "化险为夷" },
        { "Borrowed Time", "回光返照" },
        { "Window Boost", "膝跳反射" },
        { "Confined Space", "禁闭空间" },
        { "Trump Card", "底牌" },
        { "Detention", "挽留" },
        { "Insolence", "张狂" },
        { " (Bot)", " (人机)" },
        { ", Skill: ", ", 辅助特质: " },
        { ", Talents: ", ", 天赋: " },
        { "Bot", "人机" },
        { "[ Destroyed ]", "[ 已破坏 ]" },
        { "[ Unused ]", "[ 未使用 ]" },
        { "[ Used ]", "[ 已使用 ]" },

        // Messages
        { "Don't forget to join our discord server, all the news, developer videos and chats are posted there!",
            "别忘了加入我们的 discord 服务器, 所有新闻、开发人员视频和聊天都会在那里发布! " },
        { "Our team is constantly working to improve Skateware and add new features. Stay tuned for updates!",
            "我们的团队正在不断改进 Skateware 并添加新功能. 敬请期待更新! " },
        { "Thanks for using Skateware! Your support and feedback are greatly appreciated.",
            "感谢您使用Skateware! 非常感谢您的支持和反馈. " },
        { "Are you a streamer or content creator? Ask about our affiliate program and earn rewards for promoting Skateware.",
            "您是主播或内容创作者吗? 了解我们的联盟计划, 通过推广 Skateware 获得奖励. " },
        { "Have a suggestion for a new feature? We'd love to hear it! Head to our forums to share your ideas.",
            "对新功能有建议? 我们很乐意倾听! 前往我们的论坛分享您的想法. " },
        { "We appreciate your feedback! Let us know what you think of Skateware so far.",
            "我们感谢您的反馈! 请告诉我们您对 Skateware 的看法. " },
        { "Want to stay up-to-date on Skateware news and updates? Follow us on social media!",
            "想了解有关Skateware的最新消息和更新? 在社交媒体上关注我们! " },
        { "Don't forget to check out our FAQ section for answers to common questions.",
            "别忘了查看我们的常见问题部分, 了解常见问题的答案. " },
        { "Skateware Lua API is designed to be easy to use, even if you're new to game development. Give it a try!",
            "Skateware Lua API 易于使用, 即使您是游戏开发的新手也能轻松上手. 快来试试吧! " },
        {  "Did you know that Skateware has a Lua API? With Lua scripting, you can customize your game and add new features with ease.",
            "您知道Skateware有一个Lua API吗? 通过Lua脚本, 您可以轻松定制您的游戏并添加新功能. " },
        { "Calling all developers! Our Lua API makes it easy to create custom gameplay mechanics and more. Give it a try!",
            "呼叫所有开发者! 我们的Lua API让创建自定义游戏机制和更多内容变得简单. 试试看吧! " },
        { "Looking to take your game to the next level? Our Lua API lets you create custom tools and workflows for Skateware.",
            "想把您的游戏提升到一个新水平吗? 我们的Lua API让您可以为Skateware创建自定义工具和工作流程. " },
        { "With the power of Lua scripting, the possibilities for cheat development with Skateware are endless. Join our community and start creating!",
            "借助Lua脚本的强大功能, 使用Skateware进行软件开发的可能性是无穷无尽的. 加入我们的社区并开始创作吧! " },
        { "Are you a Lua expert? We'd love to see what you can create with Skateware's Lua API. Join our community and share your projects!",
            "您是Lua专家吗? 我们非常想看看您用Skateware的Lua API可以创造什么. 加入我们的社区并分享您的项目吧! " },
        { "Whether you're a seasoned developer or just getting started, Skateware's Lua API is a powerful tool for creating amazing games. Join our community and start coding today!",
            "无论您是经验丰富的开发者还是刚刚起步, Skateware的Lua API都是创建惊人功能的强大工具. 加入我们的社区并立即开始编码吧! "  },

        { "Reconnected!", "重新连接!" },
        { "Can't connect to server...", "无法连接至服务器..." },
        { "Can't connect to server, trying again...", "无法连接至服务器, 正在重试..." },
        { "Failed to find Identity V process. Try to restart loader", "无法找到第五人格进程. 请尝试重启软件" },
        { "Failed to find process. Start Identity V first!", "无法找到进程. 请先启动第五人格!" },
        { "You dont have access to Chinese version of the hack.", "您没有访问国服版本的权限. " },
        { "You can open the menu with the \"F11\" button", "您可以使用 \"F11\" 键来打开菜单. " },
        { "Fonts was rebuilded", "字体已重新构建" },
        { "Cannot find target window!", "无法找到目标窗口!" },
        { "Skinchanger: Skin was applied.", "换肤器: 皮肤已应用. " },
        { "Skinchanger: Skins were restored.", "换肤器: 皮肤已恢复. " },

        // Menu
        { "Premium Identity V Cheat", "高级第五人格辅助软件" },
        { "Navigation", "导航栏" },
        { "Rage", "辅助" },
        { "RAGE", "辅助功能" },
        { "Visuals", "视觉" },
        { "VISUALS", "视觉功能" },
        { "Misc", "杂项" },
        { "Miscellaneous", "杂项设置" },
        { "MISC", "杂项" },
        { "Lua", "脚本" },
        { "Skin Changer", "换肤器" },
        { "Click to open live match radar", "点击这里来打开实时局内雷达链接" },
        { "Are you sure you want to exit the cheat?", "您确定要退出该软件吗?" },
        { "Exit", "退出" },
        { "No", "否" },
        { "MAIN", "主菜单" },
        { "SURVIVOR", "求生者" },
        { "HUNTER", "监管者" },
        { "WORLD", "世界" },
        { "Lua scripts", "Lua 脚本" },
        { "Lua # ", "Lua # " },
        { "Everyone", "所有人" },
        { "Suvivor", "求生者" },
        { "Hunter", "监管者" },

        { "Lock", "锁定" },
        { "Aimbot", "自动瞄准" },
        { "Help with cursor fine-tuning", "帮助细调鼠标" },
        { "Auto Fire", "自动开火" },
        { "Predict", "预判" },
        { "FOV Radius", "视野半径" },
        { "Target", "目标" },
        { "Mode", "模式" },
        { "Distance Mode", "距离模式" },
        { "Field Of View", "视野范围" },
        { "Sensitivity", "灵敏度" },
        { "Smooth", "平滑度" },
        { "Predict Offset", "预测偏移" },
        { "Prediction offset", "预测偏移" },
        { "Lag Switch", "网络开关" },
        { "Block", "阻止" },
        { "Incoming", "传入" },
        { "Outgoing", "传出" },
        { "All", "全部" },
        { "Beep Sound", "蜂鸣声" },
        { "Auto pallet drop", "自动下板" },
        { "Rapid drop", "快速下板" },
        { "Rapid mode", "快速下板模式" },
        { "Legit", "合法" },
        { "Blatant", "暴力" },
        { "Ignore status", "忽略板子状态" },
        { "Activation key", "激活按键" },
        { "Drop distance", "下板距离" },
        { "Direction offset", "方向偏移" },
        { "Remove baited check", "关闭抽刀检测" },
        { "Auto skill", "自动距离技能" },
        { "Distance", "距离" },
        { "Cooldown", "冷却" },
        { "Detail setup", "详细设置" },
        { "Second press", "双击按键" },
        { "Second press delay", "双击按键延迟" },
        { "When facing angle", "仅当监管面对自己" },
        { "Angle value", "角度值" },
        { "Hunter automations", "监管者自动化" },
        { "Select Hunter", "选择监管者" },
        { "Evil Reptilian", "孽蜥" },
        { "Guard 26", "26号守卫" },
        { "Violinis", "小提琴家" },
        { "Axe Boy", "爱哭鬼" },
        { "Wu Chang", "宿伞之魂" },
        { "Auto lizard jump", "自动孽蜥下落/坠击" },
        { "Radius", "半径" },
        { "Predict position", "预测位置" },
        { "Auto bomb", "自动炸弹" },
        { "Drop offset", "放置时间偏移" },
        { "Aim at second", "随即瞄准" },
        { "Auto violinist", "自动小提琴家" },
        { "Threshold", "阈值" },
        { "Auto Robbie", "自动爱哭鬼" },
        { "Hit Threshold", "命中阈值" },
        { "Umbrella helper", "宿伞辅助" },
        { "Teleport on distance", "传送距离" },
        { "Draw ESP", "绘制透视" },
        { "DMA Background", "DMA背景" },
        { "Entities Panel", "实体面板" },
        { "Show only players", "仅显示玩家" },
        { "Panel Corner", "面板位置" },
        { "Top Left", "左上角" },
        { "Bottom Left", "左下角" },
        { "Top Right", "右上角" },
        { "Bottom Right", "右下角" },
        { "Middle Left", "左中间" },
        { "Middle Right", "右中间" },
        { "Old FOV Method", "旧视野模式" },
        { "FOV Value", "视野值" },
        { "No Fog", "除雾" },
        { "Fog Value", "雾值" },
        { "Widescreen 4:3", "宽屏4:3" },
        { "Offscreen ESP", "箭头透视" },
        { "Offset", "偏移" },
        { "Triangle Size", "箭头大小" },
        { "Survivor", "求生者" },
        { "Draw survivor", "绘制求生者" },
        { "Draw boxes", "绘制盒子" },
        { "BOX TYPE", "盒子类型" },
        { "Standart", "标准" },
        { "Corner box", "角盒" },
        { "Circle", "圆形" },
        { "Draw snap line", "绘制天线" },
        { "SNAP LINE TYPE", "天线位置" },
        { "Upper", "上方" },
        { "Center", "中间" },
        { "Bottom", "下方" },
        { "Max render distance", "最大渲染距离" },
        { "Draw distance", "绘制距离" },
        { "Draw objects", "绘制创生物" },
        { "Draw mirrored", "绘制镜像" },
        { "Lizard Helper", "孽蜥助手" },
        { "Items", "手持物" },
        { "Draw items", "绘制手持物" },
        { "ITEM BOX TYPE", "手持物盒子类型" },
        { "Hunter", "监管者" },
        { "Draw hunter", "绘制监管者" },
        { "Peeper ESP", "窥视者透视" },
        { "Show while waiting", "等待时显示角色" },
        { "Show skill indicator", "显示辅助特质指示" },
        { "Pallets", "板子" },
        { "Draw pallets", "绘制板子" },
        { "Draw status", "绘制状态" },
        { "Ciphers", "密码机" },
        { "Draw ciphers", "绘制密码机" },
        { "Show progress", "显示破译进度" },
        { "Cabinets", "柜子" },
        { "Draw cabinets", "绘制柜子" },
        { "Gallows", "狂欢之椅" },
        { "Draw gallows", "绘制狂欢之椅" },
        { "Dungeon", "地窖" },
        { "Draw dungeon", "绘制地窖" },
        { "Draw chests", "绘制箱子" },
        { "Chests", "箱子" },

        { "THEME", "主题" },
        { "Blue", "天蓝色" },
        { "Purple", "紫罗兰" },
        { "Custom", "自定义" },
        { "CUSTOM", "自定义" },
        { "Custom colors", "自定义颜色" },
        { "Color 1", "主颜色" },
        { "Color 2", "副颜色" },
        { "Transparency", "透明度" },
        { "Refresh", "重载" },
        { "Folder", "文件夹" },
        { "Save colors to theme", "将颜色保存至自定义主题" },
        { "Setup", "设置" },
        { "Protect Screen", "防截屏" },
        { "Safe Mode", "安全模式" },
        { "Watermark", "水印" },
        { "Active Binds", "激活热键" },
        { "Menu Open Key", "菜单键" },
        { "Discord RPC", "Discord RPC" },
        { "Skateware Watermark", "展示Skateware图标" },
        { "Skateware Chat", "Skateware即时聊天" },
        { "Chat Transparency", "聊天框透明度" },
        { "DPI SCALE", "DPI比例" },
        { "CONFIG", "配置" },
        { "Alpha", "阿尔法" },
        { "Beta", "贝塔" },
        { "Gamma", "伽马" },
        { "Delta", "德尔塔" },
        { "Zeta", "泽塔" },
        { "Load", "载入" },
        { "Save", "保存" },
        { "Open Folder", "打开文件夹" },
        { "Python", "Python" },
        { "Extend functionality now!", "立即扩展更多功能!" },
        { "Enable", "启用" },
        { "Show nicknames", "显示用户名" },
        { "Show skill", "显示辅助特质" },
        { "Show talents", "显示天赋" },
        { "Show bots", "显示人机" },
        { "Python not initialised", "Python未能初始化" },
        { "Install Python", "安装Python" },

        { "SKIN CHANGER", "皮肤更换器" },
        { "PREVIEW ACCESS", "仅限预览访问" },
        { "Apply Skin", "应用皮肤" },
        { "Restore Default", "恢复默认" },
        { "You don't have access to Skin Changer!", "您无权访问换肤器! " },
        { "Select any skin", "选择所有皮肤" },
        { "CHARACTER", "角色" },
        { "SKIN NAME", "皮肤名称" },
        { "Skin Preview", "皮肤预览" },
        { "To use Skin Changer, you need to purchase a subscription \nto the cheat supplement on the skateware.win website.", "要使用皮肤更换器, 您需要在 skateware.win 网站上\n购买订阅和相关功能. " },
        { "Your task is to first select the Default skin of the desired character, \nthen select the desired skin in the Skin Changer settings and click Apply. \nYou don't need to do anything else with skins. \nIt is also forbidden to change the skin until the skinchanger restores the skins. \nOtherwise, you will not be allowed into the match.", "要使用皮肤更换器, 首先在大厅里为想要换肤的角色装备默认皮肤, 然后进入任意一局游戏. 在进入游戏后, 再在换肤器中选择想要的皮肤并点击应用. \n此时请不要对皮肤做任何其他操作, 例如更换随身物品等. \n在恢复皮肤之前, 禁止更改皮肤. \n否则, 您将可能无法进入游戏并导致您必须重新安装游戏才能修复. " },

        { "None", "未设置"},
        { "Input the letter", "输入热键"},
        { "Always on", "总是开启"},
        { "Hold", "长按"},
        { "Toggle", "切换"},
        { "Force off", "强制关闭"},
        { "Configurate", "配置"},

        { "Version: ", "版本: "},
        { "Author: ", "作者: "},
        { "Stop##", "停止##" },
        { "Load##", "载入##" },
        { "Create", "创建" },
        { "File Name w/o .lua", "不带 .lua 后缀的文件名" },
        { "Open skateware folder", "打开skateware文件夹" },
        { "Open resources marketplace", "打开资源市场" },
        { "Open docs", "打开文档" },
        { "Refresh cloud scripts", "刷新云端脚本" },

        { "ESP: ", "透视: " },
        { "Auto pallet: ", "自动下板: " },
        { "Field Of View: ", "视野范围: " },
        { "Lizard jump: ", "孽蜥坠击: " },
        { "Lizard Helper: ", "孽蜥辅助: " },
        { "Aimbot: ", "自瞄: " },
        { "Auto skill: ", "距离技能: " },
        { "Wu Chang Helper: ", "宿伞辅助: " },
        { "Lag Switch: ", "延迟开关: " },

    };
}

#endif // LOCALIZATION_CN_H
