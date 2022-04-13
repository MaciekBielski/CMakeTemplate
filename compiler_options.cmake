add_compile_options(-Werror -Wall -Wextra -pedantic
    -Wno-unused-command-line-argument
    -Wno-c11-extensions
    -O0
    -ggdb3
    )

include(CheckCXXCompilerFlag)
check_cxx_compiler_flag(-Weverything CXX_HAS_EVERYTHING)
if (CXX_HAS_EVERYTHING)
    add_compile_options(-Wall -Wextra -Weverything -Werror
        -Wno-c++98-compat
        -Wno-c++98-compat-pedantic
        -Wno-weak-vtables
        -Wno-missing-prototypes
        -Wno-unused-function
        -Wno-unused-member-function
        -Wno-unused-variable
        -Wno-used-but-marked-unused
        -Wno-padded
        -Wno-missing-variable-declarations
        -Wno-global-constructors
        -Wno-unused-parameter
        -Wno-error=exit-time-destructors
        -Wno-error=literal-conversion
        -Wno-error=padded
        -Wno-error=suggest-destructor-override
        -Wno-error=zero-as-null-pointer-constant
        )
endif(CXX_HAS_EVERYTHING)

