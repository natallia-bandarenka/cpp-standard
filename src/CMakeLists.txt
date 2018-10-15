add_executable(cpp-standard
    main.cpp
    algorithms/nonmodifying/all_of.cpp
    algorithms/nonmodifying/any_of.cpp
)

max_warnings_level(cpp-standard)
treat_warnings_as_errors(cpp-standard)

target_link_libraries(cpp-standard Catch2::Catch2)

add_test(
    NAME cpp-standard
    COMMAND $<TARGET_FILE:cpp-standard>
)
