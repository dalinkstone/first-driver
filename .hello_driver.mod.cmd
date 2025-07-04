savedcmd_/home/dal/first-driver/hello_driver.mod := printf '%s\n'   hello_driver.o | awk '!x[$$0]++ { print("/home/dal/first-driver/"$$0) }' > /home/dal/first-driver/hello_driver.mod
