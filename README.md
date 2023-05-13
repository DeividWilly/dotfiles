# Arch Linux dotfiles #
## [DWM - Dynamic Window Manager](https://dwm.suckless.org) ##
<img align="right" src="assets/imgs/dual.png" alt="home desktop" width="363px"/>



```py
me = {
    Distro: 'Arch Linux',
    MainEditor: 'Neovim',
    Browser: 'Firefox',
    Shell: 'zsh',
    FrameworkShell: 'oh-my-zsh',
    ProcessViewer: 'htop',

    Music: 'spotifyd + spotify-tui',
    Compositor: 'picom',
    Notify: 'dunst',
    ImageViewer: 'kitty icat',
    MediaPlayer: 'VLC',
    FileManager: 'ranger',

    WindowManager: 'DWM',
    Terminal: 'kitty',
    AppLauncher: 'dmenu',
    Font: 'Inconsolata Nerd Fonts'
}

```

## Files Scheme Tree ##
```py

.config
├── dunst
│  └── dunstrc
├── kitty
│  └── kitty.conf
├── nvim
│  ├── init.lua
│  └── lua
│     └── core
│        ├── keymaps.lua
│        └── settings.lua
├── picom
│  └── picom.conf
├── suckless
│  └── dwm
│     ├── config.def.h
│     ├── config.h
│     ├── config.mk
│     ├── drw.c
│     ├── drw.h
│     ├── drw.o
│     ├── dwm
│     ├── dwm.1
│     ├── dwm.c
│     ├── dwm.o
│     ├── dwm.png
│     ├── dwmblocks
│     │  ├── blocks.def.h
│     │  ├── blocks.h
│     │  ├── dwmblocks
│     │  ├── dwmblocks.c
│     │  ├── LICENSE
│     │  ├── Makefile
│     │  └── README.md
│     ├── LICENSE
│     ├── Makefile
│     ├── patchs
│     │  ├── dwm-alwayscenter-20200625-f04cac6.diff
│     │  └── dwm-autostart-20210120-cb3f58a.diff
│     ├── README
│     ├── transient.c
│     ├── util.c
│     ├── util.h
│     └── util.o
├── sxhkd
│  └── sxhkdrc
└── termite
   └── config
.newsboat
└── urls
.xinitrc
.zshrc
Scripts
├── connection.py
├── cpu.sh
├── date.py
├── diskfree.sh
├── mem.sh
├── mute.py
├── pacmanup.sh
├── rofi-power-menu-master
│  ├── COPYING
│  ├── dmenu-power-menu
│  ├── README.md
│  ├── rofi-power-menu
│  └── screenshot.png
├── rofi.sh
├── set+vol.sh
├── set-vol.sh
└── temp.sh
```
