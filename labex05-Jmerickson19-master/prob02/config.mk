# Directory containing test files
TEST_PATH     := test
# Space-separated list of header files (e.g., algebra.hpp)
HEADERS       := bubble.hpp
# Space-separated list of implementation files (e.g., algebra.cpp)
IMPLEMS       := bubble.cpp
# File containing main
DRIVER        := main.cpp
# Expected name of executable file
EXECFILE      := main
CLANGTDY_CHKS := *,-google-build-using-namespace,-fuchsia-default-arguments,-llvm-header-guard,-cppcoreguidelines-pro-type-member-init,-hicpp-member-init,-fuchsia-overloaded-operator,-llvm-include-order,-modernize-use-nodiscard
