# Visual Language Switcher

![Backdrop CMS](https://img.shields.io/badge/Backdrop-CMS-0073aa.svg)
![License](https://img.shields.io/badge/license-GPL--2.0--or--later-green.svg)

A visual, configurable language switcher for Backdrop CMS with country flags from FamFamFam. Perfect for multilingual sites wanting intuitive, visual language selection.

**This is an original Backdrop CMS module, not a port from Drupal. It provides modern, visual language switching as a maintained alternative to abandoned solutions.**

## 🚀 Features

- **Country Flags** - Visual language identification with FamFamFam flag icons
- **Multiple Display Modes** - Flag with name, flag only, or text only
- **Native Language Names** - Displays languages in their native form (Deutsch, Español, Français)
- **Responsive Design** - Works perfectly on all devices
- **Admin Configuration** - Simple settings page for display preferences
- **No JavaScript Required** - Lightweight and fast

## 📦 Installation

1. Download and extract to your `modules/` directory
2. Ensure FamFamFam flag icons are in the `flags/` subdirectory
3. Enable at **Modules** (`admin/modules`)
4. Configure at **Configuration → Regional → Visual Language Switcher** (`admin/config/regional/visual-language-switcher`)
5. Place block at **Structure → Block layout** (`admin/structure/block`)

**Note:** When installing manually, you can use `modules/custom/` for organization, but Backdrop's installer will place contrib modules in `modules/`.

## ⚙️ Configuration

### Display Options:
- **Flag with Name** - 🇩🇪 Deutsch (visual + clear)
- **Only Flag** - 🇩🇪 (compact, visual)
- **Only Name** - Deutsch (text-only, accessible)

### Settings:
- **Display mode** - Choose how languages appear to users

## 🎯 Usage

1. **Enable module** and configure display preferences
2. **Ensure languages** are configured in Backdrop's locale settings
3. **Place block** in any region (typically header/navigation)
4. **Users can intuitively** switch languages with visual cues

## 🛠️ For Developers

### Template Override:
Override the language switcher output by creating:
`templates/links--visual-language-switcher.tpl.php`

### CSS Styling:
```css
.visual-language-switcher {
  display: flex;
  gap: 10px;
  align-items: center;
}

.visual-language-switcher .language-flag {
  width: 20px;
  height: 15px;
  border-radius: 2px;
}
```

## 🤝 Contributing

We welcome contributions! Please feel free to:
- Submit issues and feature requests
- Create merge requests with improvements  
- Suggest additional flag mappings or display options

## 👤 Credits

**Developed by Max Elements**  
This is an original Backdrop CMS module, built specifically for the Backdrop ecosystem as part of the Max Elements Toolbox.

## 📄 License

This project is licensed under the GPL-2.0-or-later License - see the [LICENSE](LICENSE) file for details.

## 🏢 About Max Elements

Visual Language Switcher is maintained by [Max Elements](https://max-elements.com/), providing premium web development and cybersecurity solutions.

## 🧰 Max Elements Toolbox

**Max Elements Toolbox** represents our commitment to building and maintaining quality Backdrop CMS modules and themes for the community.

This toolbox includes:
- Essential utility modules (like Dynamic Copyright and Visual Language Switcher)
- Professional themes
- Client-proven solutions  
- All maintained long-term as part of our business offerings

Visual Language Switcher is part of this ongoing initiative to contribute quality tools to the Backdrop ecosystem.

---

*Built with care for the Backdrop CMS community* 🛠️
