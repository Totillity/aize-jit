#ifndef LINUX_JIT_TERMINATOR_H
#define LINUX_JIT_TERMINATOR_H

typedef enum {
    BRANCH,
} TerminatorID;

#define TERMINATOR_HEADER TerminatorID id;

typedef struct {
    TERMINATOR_HEADER;
} TerminatorIR;

#endif //LINUX_JIT_TERMINATOR_H
