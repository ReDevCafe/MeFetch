# <img src="https://cdn.discordapp.com/attachments/1096801285027659808/1156991224096489582/MeFetch.logo.png?ex=6516fb8b&is=6515aa0b&hm=82e692f57029a85f55aa450a8b9f01384fa8b90a2595bdc1e61a3db41d08f426&" width="30"> **ME FETCH**
INCREDIBLE! I CAN FETCH MY PERSONAL INFO LIKE MY CREDIT CARD KEY, OR MY SOCIAL SECURITY NUMBER (please dont.) INTO A IMAGE

## Installation:
idc compile it or install it from the release.. <br/>

### Build:
#### packages for compilation:

- 🌎 [Meson](https://mesonbuild.com/Quick-guide.html#installation-using-package-manager) - [📂 [pkgs]](https://pkgs.org/search/?q=meson)
- 🌎 [gcc](https://gcc.gnu.org/install/) - [📂 [pkgs]](https://pkgs.org/search/?q=gcc)

#### packages dependencies:

- 🌎 [SDL2](https://wiki.libsdl.org/SDL2/Installation) - [📂 [pkgs]](https://pkgs.org/search/?q=sdl2)
- 🌎 [SDL2-image](https://github.com/libsdl-org/SDL_image/releases) - [📂 [pkgs]](https://pkgs.org/search/?q=sdl2-image)

#### step to follow after installing requirements:
1. Copy the repo
```bash 
git clone https://github.com/ReDevCafe/MeFetch.git | cd MeFetch
```
2. Setup meson
```bash
meson setup out
```
3. Compile the package
```bash
meson compile -C out
```
4. As your wish put it in your binaries
```bash
sudo mv out/mefetch /bin/mefetch
```
