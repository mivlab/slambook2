
1. 3rdparty/g2o_config.h ，把这个文件复制到g2o目录下，重命名为config.h
因为g2o 目录是来自其他代码库，所以不方便直接放在下面。
2. 运行时需要需要不少 dll， 在lib 和pangolin-build目录下，运行时需要复制到exe文件所在的目录。