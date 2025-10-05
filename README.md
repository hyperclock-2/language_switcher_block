# Language Switcher Block

![Backdrop CMS](https://img.shields.io/badge/Backdrop-CMS-0073aa.svg)
![License](https://img.shields.io/badge/license-GPL--2.0--or--later-green.svg)

A visual, configurable language switcher block for Backdrop CMS with country flags from FamFamFam. Perfect for multilingual sites wanting intuitive, visual language selection.

## 🚀 Features

- **Country Flags** - Visual language identification with FamFamFam flag icons
- **Multiple Display Modes** - Flag with name, flag only, or text only
- **Responsive Design** - Works perfectly on all devices
- **Navbar Integration** - Easy placement in header/menu regions
- **Admin Configuration** - Simple settings page for display preferences
- **No JavaScript Required** - Lightweight and fast

## 📦 Installation

1. Download and place in `modules/custom/` directory
2. Ensure FamFamFam flag icons are in the `flags/` subdirectory
3. Enable at **Modules** (`admin/modules`)
4. Configure at **Configuration → Regional → Language Switcher Block** (`admin/config/regional/language-switcher-block`)
5. Place block at **Structure → Block layout** (`admin/structure/block`)

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
`templates/links--language-block.tpl.php`

### CSS Styling:
```css
.language-switcher-block {
  display: flex;
  gap: 10px;
  align-items: center;
}

.language-switcher-block .language-flag {
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
This is an original Backdrop CMS module, not a port from Drupal.
Built specifically as the visual, user-friendly alternative to text-only language switchers.

## 📄 License

This project is licensed under the GPL-2.0-or-later License - see the [LICENSE](LICENSE) file for details.

## 🏢 About Max Elements

Language Switcher Block is maintained by [Max Elements](https://max-elements.com/), providing premium web development and cybersecurity solutions.

## 🧰 Max Elements Toolbox

**Max Elements Toolbox** represents Max Elements' commitment to building and maintaining quality Backdrop CMS modules and themes for the community. This initiative signifies our renewed focus on Backdrop development.

This toolbox includes:
- Essential utility modules (like Copyright Block and Language Switcher Block)
- Professional themes
- Client-proven solutions  
- All maintained long-term as part of our business offerings

Language Switcher Block is part of this ongoing initiative to contribute quality tools to the Backdrop ecosystem.

---

*Built with care for the Backdrop CMS community* 🛠️
