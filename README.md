# Skateware-Lang

The Skateware-Lang repository is an open-source project dedicated to translating the skateware.win application into various languages. We welcome contributions from anyone willing to help make Skateware accessible to a global audience.

## How to Contribute

1. **Fork the Repository**
    - Click the "Fork" button at the top right of this repository to create your own fork.

2. **Clone the Repository**
    - Clone your forked repository to your local machine:
      ```sh
      git clone https://github.com/<YOUR_USERNAME>/skateware-lang.git
      ```

3. **Create a New Branch**
    - Create a new branch for your translations:
      ```sh
      git checkout -b add-<language>-translations
      ```

4. **Add Your Translations**
    - Create a new cpp file for your language, following the naming convention `localization_<language_code>.cpp`.
    - Define the translation function and the respective translations as shown in the example below.

### Example Configuration File (C++)

```cpp
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
        // Add more translations here from master branch official files
    };
}

#endif // LOCALIZATION_CN_H
```

### Translation Guidelines

- **File Naming:** Name your file as `localization_<language_code>.cpp`, where `<language_code>` is the ISO 639-1 language code.
- **Function Naming:** The function that returns the translations should be named `get<Language>Translations`, where `<Language>` is the name of the language in English (e.g., `getSpanishTranslations`).
- **Translation Entries:** Each entry should be a key-value pair where the key is the English phrase and the value is the translated phrase.
- **Comments:** Use comments to categorize translations (e.g., `// Auth Menu`).

5. **Commit and Push Changes**
    - Commit your changes with a clear message:
      '''
      git add .
      git commit -m "Add Chinese translations"
      git push origin add-<language>-translations
      '''

6. **Create a Pull Request**
    - Go to the original repository and click the "New Pull Request" button.
    - Ensure your branch is selected and submit the pull request for review.

## Code of Conduct

We expect all contributors to adhere to the [Contributor Covenant Code of Conduct](https://www.contributor-covenant.org/version/2/0/code_of_conduct/).

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contact

For any questions or further assistance, please open an issue in the repository or contact the maintainers directly.

---

Thank you for your contributions to Skateware-Lang!
