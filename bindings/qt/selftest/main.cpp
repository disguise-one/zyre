/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
#include <QDebug>
#include "qtzyre.h"

int main(int argc, char **argv)
{
    bool verbose;
    if (argc == 2 && streq (argv [1], "-v"))
        verbose = true;
    else
        verbose = false;

    qDebug() << "Running qtzyre selftests...\n";

    QZyre::test (verbose);
    QZyreEvent::test (verbose);
    QZcert::test (verbose);
    QZmsg::test (verbose);
    QZlist::test (verbose);
    QZsock::test (verbose);
    QZhash::test (verbose);
    QZframe::test (verbose);

    qDebug() << "Tests passed OK\n";
    return 0;
}
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
