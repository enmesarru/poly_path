mkdir $HOME/deps
cd $HOME/deps
git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git
export PATH="${PWD}/depot_tools:${PATH}"
cd skia
python tools/git-sync-deps
gn gen out/Release-x64 --args="is_debug=true is_official_build=false skia_use_system_expat=false skia_use_system_icu=false skia_use_system_libjpeg_turbo=false skia_use_system_libpng=false skia_use_system_libwebp=false skia_use_system_zlib=false"
ninja -C out/Release-x64 skia modules


Replacing python3 to python2
$ cd /usr/bin
$ ls -l python
    python -> python3
$ ln -sf python2 python
$ ls -l python
    python -> python2


Ignoring these errors: Set CMAKE_BUILD_TYPE, from Debug to Release
These problem happens propably because of you set is_debug=false and is_official_build=true
undefined reference to `gLogCallsGL'
undefined reference to `gCheckErrorGL'
undefined reference to `GrGLInterface::checkError(char const*, char const*) const'


CMake Path:
SKIA_INCLUDE_DIR points to include directory
SKIA_LIBRARY points to where libskia.a located