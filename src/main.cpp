#include "editor.hpp"

#include <physfs.h>

int main(int argc, char* argv[])
{
    PHYSFS_init(argv[0]);
    Editor* editor = Editor::getEditor();

    if (editor!=0)
        editor->run();

    return 0;
}
