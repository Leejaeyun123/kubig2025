cmake_minimum_required(VERSION 3.10)
project(bookSql)

add_executable(bookSql bookSql.c)
target_include_directories(bookSql PRIVATE /usr/include/mysql)
target_link_directories(bookSql PRIVATE /usr/lib/mysql)
target_link_libraries(bookSql PRIVATE mysqlclient)

# add_executable(c_example/part1)
# add_executable(c_example/part2)
# add_executable(c_example/part3)