# ME FETCH
INCREDIBLE! I CAN FETCH MY PERSONAL INFO LIKE MY CREDIT CARD KEY, OR MY SOCIAL SECURITY NUMBER (please dont.) INTO A IMAGE

## Installation:
idc compile it or install it from the release.. <br/>

### Build:
#### packages for compilation:

- 🌎 [Meson](https://mesonbuild.com/Quick-guide.html#installation-using-package-manager) - [📂 [pkgs]](https://pkgs.org/search/?q=meson)
- 🌎 [gcc](https://gcc.gnu.org/install/) - [📂 [pkgs]](https://pkgs.org/search/?q=gcc)

#### packages dependencies:

- 🌎 [SDL2](https://wiki.libsdl.org/SDL2/Installation) - [📂 [pgks]](https://pkgs.org/search/?q=sdl2)
- 🌎 [SDL2-image](https://github.com/libsdl-org/SDL_image/releases) - [📂 [pgks]](https://pkgs.org/search/?q=sdl2-image)

#### step to follow after installing requirements:
1. Copy the repo
```bash 
git clone https://github.com/ReDevCafe/mefetch.git | cd mefetch
```

2. Compile the package
```html
meson compile -C out
```
3. As your wish put it in your binaries
```bash
sudo mv out/mefetch /bin/mefetch
```
