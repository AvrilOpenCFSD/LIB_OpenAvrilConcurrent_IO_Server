#pragma once

namespace OpenAvril
{
    class Output_Control
    {
// calsses.

// registers.

    public:
// constructor.
    Output_Control();

// destructor.
    virtual ~Output_Control();

// public.
    void Selectset_Output_Subset(class Framework_Server* obj, uint8_t ptr_praiseEventId, uint8_t concurrent_threadID);
    // get.
    // set.

    private:
// private.
    // get.
    // set.
    };
}