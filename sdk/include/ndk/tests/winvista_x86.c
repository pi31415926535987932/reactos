/* Version definitions */
#undef NTDDI_VERSION
#define NTDDI_VERSION NTDDI_VISTA
#undef _WIN32_WINNT
#define _WIN32_WINNT _WIN32_WINNT_VISTA

#include <ntifs.h>
#include <ndk/ntndk.h>

#define C_ASSERT_FIELD(Type, Offset, MemberType, MemberName) C_ASSERT(FIELD_OFFSET(Type, MemberName) == Offset);

/* KTHREAD */
C_ASSERT_FIELD(KTHREAD, 0x000, DISPATCHER_HEADER, Header)
C_ASSERT_FIELD(KTHREAD, 0x010, UINT64, CycleTime)
C_ASSERT_FIELD(KTHREAD, 0x018, ULONG, HighCycleTime)
C_ASSERT_FIELD(KTHREAD, 0x020, UINT64, QuantumTarget)
C_ASSERT_FIELD(KTHREAD, 0x028, PVOID, InitialStack)
C_ASSERT_FIELD(KTHREAD, 0x02C, PVOID, StackLimit)
C_ASSERT_FIELD(KTHREAD, 0x030, PVOID, KernelStack)
C_ASSERT_FIELD(KTHREAD, 0x034, ULONG, ThreadLock)
C_ASSERT_FIELD(KTHREAD, 0x038, KAPC_STATE, ApcState)
C_ASSERT_FIELD(KTHREAD, 0x038, UCHAR, ApcStateFill)
C_ASSERT_FIELD(KTHREAD, 0x04F, CHAR, Priority)
C_ASSERT_FIELD(KTHREAD, 0x050, USHORT, NextProcessor)
C_ASSERT_FIELD(KTHREAD, 0x052, USHORT, DeferredProcessor)
C_ASSERT_FIELD(KTHREAD, 0x054, ULONG, ApcQueueLock)
C_ASSERT_FIELD(KTHREAD, 0x058, ULONG, ContextSwitches)
C_ASSERT_FIELD(KTHREAD, 0x05C, UCHAR, State)
C_ASSERT_FIELD(KTHREAD, 0x05D, UCHAR, NpxState)
C_ASSERT_FIELD(KTHREAD, 0x05E, UCHAR, WaitIrql)
C_ASSERT_FIELD(KTHREAD, 0x05F, CHAR, WaitMode)
C_ASSERT_FIELD(KTHREAD, 0x060, LONG32, WaitStatus)
C_ASSERT_FIELD(KTHREAD, 0x064, KWAIT_BLOCK*, WaitBlockList)
C_ASSERT_FIELD(KTHREAD, 0x064, KGATE*, GateObject)
C_ASSERT_FIELD(KTHREAD, 0x068, LONG, MiscFlags)
C_ASSERT_FIELD(KTHREAD, 0x06C, UCHAR, WaitReason)
C_ASSERT_FIELD(KTHREAD, 0x06D, UCHAR, SwapBusy)
C_ASSERT_FIELD(KTHREAD, 0x06E, UCHAR, Alerted)
C_ASSERT_FIELD(KTHREAD, 0x070, LIST_ENTRY, WaitListEntry)
C_ASSERT_FIELD(KTHREAD, 0x070, SINGLE_LIST_ENTRY, SwapListEntry)
C_ASSERT_FIELD(KTHREAD, 0x078, KQUEUE*, Queue)
C_ASSERT_FIELD(KTHREAD, 0x07C, ULONG, WaitTime)
C_ASSERT_FIELD(KTHREAD, 0x080, INT16, KernelApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x082, INT16, SpecialApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x080, ULONG, CombinedApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x084, PVOID, Teb)
C_ASSERT_FIELD(KTHREAD, 0x088, KTIMER, Timer)
C_ASSERT_FIELD(KTHREAD, 0x088, UCHAR, TimerFill)
C_ASSERT_FIELD(KTHREAD, 0x0B0, LONG32, ThreadFlags)
C_ASSERT_FIELD(KTHREAD, 0x0B8, KWAIT_BLOCK, WaitBlock)
C_ASSERT_FIELD(KTHREAD, 0x0B8, UCHAR, WaitBlockFill0)
C_ASSERT_FIELD(KTHREAD, 0x0CF, UCHAR, IdealProcessor)
C_ASSERT_FIELD(KTHREAD, 0x0B8, UCHAR, WaitBlockFill1)
C_ASSERT_FIELD(KTHREAD, 0x0E7, CHAR, PreviousMode)
C_ASSERT_FIELD(KTHREAD, 0x0B8, UCHAR, WaitBlockFill2)
C_ASSERT_FIELD(KTHREAD, 0x0FF, UCHAR, ResourceIndex)
C_ASSERT_FIELD(KTHREAD, 0x0B8, UCHAR, WaitBlockFill3)
C_ASSERT_FIELD(KTHREAD, 0x117, UCHAR, LargeStack)
C_ASSERT_FIELD(KTHREAD, 0x118, LIST_ENTRY, QueueListEntry)
C_ASSERT_FIELD(KTHREAD, 0x120, KTRAP_FRAME*, TrapFrame)
C_ASSERT_FIELD(KTHREAD, 0x124, PVOID, FirstArgument)
C_ASSERT_FIELD(KTHREAD, 0x128, PVOID, CallbackStack)
C_ASSERT_FIELD(KTHREAD, 0x128, ULONG, CallbackDepth)
C_ASSERT_FIELD(KTHREAD, 0x12C, PVOID, ServiceTable)
C_ASSERT_FIELD(KTHREAD, 0x130, UCHAR, ApcStateIndex)
C_ASSERT_FIELD(KTHREAD, 0x131, CHAR, BasePriority)
C_ASSERT_FIELD(KTHREAD, 0x132, CHAR, PriorityDecrement)
C_ASSERT_FIELD(KTHREAD, 0x133, UCHAR, Preempted)
C_ASSERT_FIELD(KTHREAD, 0x134, UCHAR, AdjustReason)
C_ASSERT_FIELD(KTHREAD, 0x135, CHAR, AdjustIncrement)
C_ASSERT_FIELD(KTHREAD, 0x136, UCHAR, Spare01)
C_ASSERT_FIELD(KTHREAD, 0x137, CHAR, Saturation)
C_ASSERT_FIELD(KTHREAD, 0x138, ULONG, SystemCallNumber)
C_ASSERT_FIELD(KTHREAD, 0x13C, ULONG, Spare02)
C_ASSERT_FIELD(KTHREAD, 0x140, ULONG, UserAffinity)
C_ASSERT_FIELD(KTHREAD, 0x144, KPROCESS*, Process)
C_ASSERT_FIELD(KTHREAD, 0x148, ULONG, Affinity)
C_ASSERT_FIELD(KTHREAD, 0x14C, KAPC_STATE*, ApcStatePointer)
C_ASSERT_FIELD(KTHREAD, 0x154, KAPC_STATE, SavedApcState)
C_ASSERT_FIELD(KTHREAD, 0x154, UCHAR, SavedApcStateFill)
C_ASSERT_FIELD(KTHREAD, 0x16B, CHAR, FreezeCount)
C_ASSERT_FIELD(KTHREAD, 0x16C, CHAR, SuspendCount)
C_ASSERT_FIELD(KTHREAD, 0x16D, UCHAR, UserIdealProcessor)
C_ASSERT_FIELD(KTHREAD, 0x16E, UCHAR, Spare03)
C_ASSERT_FIELD(KTHREAD, 0x16F, UCHAR, OtherPlatformFill)
C_ASSERT_FIELD(KTHREAD, 0x170, PVOID, Win32Thread)
C_ASSERT_FIELD(KTHREAD, 0x174, PVOID, StackBase)
C_ASSERT_FIELD(KTHREAD, 0x178, KAPC, SuspendApc)
C_ASSERT_FIELD(KTHREAD, 0x178, UCHAR, SuspendApcFill0)
C_ASSERT_FIELD(KTHREAD, 0x179, CHAR, Spare04)
C_ASSERT_FIELD(KTHREAD, 0x178, UCHAR, SuspendApcFill1)
C_ASSERT_FIELD(KTHREAD, 0x17B, UCHAR, QuantumReset)
C_ASSERT_FIELD(KTHREAD, 0x178, UCHAR, SuspendApcFill2)
C_ASSERT_FIELD(KTHREAD, 0x17C, ULONG, KernelTime)
C_ASSERT_FIELD(KTHREAD, 0x178, UCHAR, SuspendApcFill3)
C_ASSERT_FIELD(KTHREAD, 0x19C, KPRCB*, WaitPrcb)
C_ASSERT_FIELD(KTHREAD, 0x178, UCHAR, SuspendApcFill4)
C_ASSERT_FIELD(KTHREAD, 0x1A0, PVOID, LegoData)
C_ASSERT_FIELD(KTHREAD, 0x178, UCHAR, SuspendApcFill5)
C_ASSERT_FIELD(KTHREAD, 0x1A7, UCHAR, PowerState)
C_ASSERT_FIELD(KTHREAD, 0x1A8, ULONG, UserTime)
C_ASSERT_FIELD(KTHREAD, 0x1AC, KSEMAPHORE, SuspendSemaphore)
C_ASSERT_FIELD(KTHREAD, 0x1AC, UCHAR, SuspendSemaphorefill)
C_ASSERT_FIELD(KTHREAD, 0x1C0, ULONG, SListFaultCount)
C_ASSERT_FIELD(KTHREAD, 0x1C4, LIST_ENTRY, ThreadListEntry)
C_ASSERT_FIELD(KTHREAD, 0x1CC, LIST_ENTRY, MutantListHead)
C_ASSERT_FIELD(KTHREAD, 0x1D4, PVOID, SListFaultAddress)
C_ASSERT_FIELD(KTHREAD, 0x1D8, PVOID, MdlForLockedTeb)

