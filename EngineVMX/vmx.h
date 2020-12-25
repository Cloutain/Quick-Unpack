#ifndef VMX_H
#define VMX_H

enum
{
	IA32_FEATURE_CONTROL=0x3a,
	IA32_SYSENTER_CS=0x174,
	IA32_SYSENTER_ESP=0x175,
	IA32_SYSENTER_EIP=0x176,
	IA32_DEBUGCTL=0x1d9,
	IA32_VMX_BASIC=0x480,
	IA32_VMX_PINBASED_CTLS=0x481,
	IA32_VMX_PROCBASED_CTLS=0x482,
	IA32_VMX_EXIT_CTLS=0x483,
	IA32_VMX_ENTRY_CTLS=0x484,
	IA32_VMX_PROCBASED_CTLS2=0x48b,
	IA32_VMX_TRUE_PINBASED_CTLS=0x48d,
	IA32_VMX_TRUE_PROCBASED_CTLS=0x48e,
	IA32_VMX_TRUE_EXIT_CTLS=0x48f,
	IA32_VMX_TRUE_ENTRY_CTLS=0x490,
	IA32_FS_BASE=0xc0000100,
	IA32_GS_BASE=0xc0000101
};

enum
{
	VMX_GUEST_ES=0x800,
	VMX_GUEST_CS=0x802,
	VMX_GUEST_SS=0x804,
	VMX_GUEST_DS=0x806,
	VMX_GUEST_FS=0x808,
	VMX_GUEST_GS=0x80a,
	VMX_GUEST_TR=0x80e,
	VMX_HOST_ES=0xc00,
	VMX_HOST_CS=0xc02,
	VMX_HOST_SS=0xc04,
	VMX_HOST_DS=0xc06,
	VMX_HOST_FS=0xc08,
	VMX_HOST_GS=0xc0a,
	VMX_HOST_TR=0xc0c,
	VMX_CTRL_MSRBMFULL=0x2004,
	VMX_CTRL_MSRBMHIGH=0x2005,
	VMX_GUEST_VMCSLINKFULL=0x2800,
	VMX_GUEST_VMCSLINKHIGH=0x2801,
	VMX_GUEST_DEBUGCTLFULL=0x2802,
	VMX_GUEST_DEBUGCTLHIGH=0x2803,
	VMX_CTRL_PINBASED=0x4000,
	VMX_CTRL_PROCBASED=0x4002,
	VMX_CTRL_EXCEPTIONS=0x4004,
	VMX_CTRL_PFMASK=0x4006,
	VMX_CTRL_PFMATCH=0x4008,
	VMX_CTRL_VMEXIT=0x400c,
	VMX_CTRL_VMENTRY=0x4012,
	VMX_CTRL_PROCBASED2=0x401e,
	VMX_EXIT_REASON=0x4402,
	VMX_EXIT_INTINFO=0x4404,
	VMX_EXIT_INTERROR=0x4406,
	VMX_EXIT_INSTRLENGTH=0x440c,
	VMX_GUEST_ESLIMIT=0x4800,
	VMX_GUEST_CSLIMIT=0x4802,
	VMX_GUEST_SSLIMIT=0x4804,
	VMX_GUEST_DSLIMIT=0x4806,
	VMX_GUEST_FSLIMIT=0x4808,
	VMX_GUEST_GSLIMIT=0x480a,
	VMX_GUEST_TRLIMIT=0x480e,
	VMX_GUEST_GDTLIMIT=0x4810,
	VMX_GUEST_IDTLIMIT=0x4812,
	VMX_GUEST_ESACCESS=0x4814,
	VMX_GUEST_CSACCESS=0x4816,
	VMX_GUEST_SSACCESS=0x4818,
	VMX_GUEST_DSACCESS=0x481a,
	VMX_GUEST_FSACCESS=0x481c,
	VMX_GUEST_GSACCESS=0x481e,
	VMX_GUEST_LDTRACCESS=0x4820,
	VMX_GUEST_TRACCESS=0x4822,
	VMX_GUEST_ACTIVITY=0x4826,
	VMX_GUEST_SYSENTER_CS=0x482a,
	VMX_HOST_SYSENTER_CS=0x4c00,
	VMX_EXIT_QUALIFICATION=0x6400,
	VMX_GUEST_CR0=0x6800,
	VMX_GUEST_CR3=0x6802,
	VMX_GUEST_CR4=0x6804,
	VMX_GUEST_ESBASE=0x6806,
	VMX_GUEST_CSBASE=0x6808,
	VMX_GUEST_SSBASE=0x680a,
	VMX_GUEST_DSBASE=0x680c,
	VMX_GUEST_FSBASE=0x680e,
	VMX_GUEST_GSBASE=0x6810,
	VMX_GUEST_TRBASE=0x6814,
	VMX_GUEST_GDTBASE=0x6816,
	VMX_GUEST_IDTBASE=0x6818,
	VMX_GUEST_RSP=0x681c,
	VMX_GUEST_RIP=0x681e,
	VMX_GUEST_RFLAGS=0x6820,
	VMX_GUEST_SYSENTER_ESP=0x6824,
	VMX_GUEST_SYSENTER_EIP=0x6826,
	VMX_HOST_CR0=0x6c00,
	VMX_HOST_CR3=0x6c02,
	VMX_HOST_CR4=0x6c04,
	VMX_HOST_FSBASE=0x6c06,
	VMX_HOST_GSBASE=0x6c08,
	VMX_HOST_TRBASE=0x6c0a,
	VMX_HOST_GDTBASE=0x6c0c,
	VMX_HOST_IDTBASE=0x6c0e,
	VMX_HOST_SYSENTER_ESP=0x6c10,
	VMX_HOST_SYSENTER_EIP=0x6c12,
	VMX_HOST_RSP=0x6c14,
	VMX_HOST_RIP=0x6c16,
};

enum
{
	VMEXIT_EXCEPTION=0,
	VMEXIT_EXTINT=1,
	VMEXIT_TRIPLEFAULT=2,
	VMEXIT_INIT=3,
	VMEXIT_SIPI=4,
	VMEXIT_IOSMI=5,
	VMEXIT_OTHERSMI=6,
	VMEXIT_INTWINDOW=7,
	VMEXIT_NMIWINDOW=8,
	VMEXIT_TASKSWITCH=9,
	VMEXIT_CPUID=10,
	VMEXIT_GETSEC=11,
	VMEXIT_HLT=12,
	VMEXIT_INVD=13,
	VMEXIT_INVLPG=14,
	VMEXIT_RDPMC=15,
	VMEXIT_RDTSC=16,
	VMEXIT_RSM=17,
	VMEXIT_VMCALL=18,
	VMEXIT_VMCLEAR=19,
	VMEXIT_VMLAUNCH=20,
	VMEXIT_VMPTRLD=21,
	VMEXIT_VMPTRST=22,
	VMEXIT_VMREAD=23,
	VMEXIT_VMRESUME=24,
	VMEXIT_VMWRITE=25,
	VMEXIT_VMXOFF=26,
	VMEXIT_VMXON=27,
	VMEXIT_MOVCR=28,
	VMEXIT_MOVDR=29,
	VMEXIT_IOINSTR=30,
	VMEXIT_RDMSR=31,
	VMEXIT_WRMSR=32,
	VMEXIT_INVALIDGUEST=33,
	VMEXIT_FAILLOADMSR=34,
	VMEXIT_MWAIT=36,
	VMEXIT_MONITORTRAP=37,
	VMEXIT_MONITOR=39,
	VMEXIT_PAUSE=40,
	VMEXIT_FAILMACHINECHECK=41,
	VMEXIT_TPRBELOWTHRES=43,
	VMEXIT_APICACCESS=44,
	VMEXIT_VIRTEOI=45,
	VMEXIT_GDTRIDTR=46,
	VMEXIT_LDTRTR=47,
	VMEXIT_EPTVIOLATION=48,
	VMEXIT_EPTMISCONFIG=49,
	VMEXIT_INVEPT=50,
	VMEXIT_RDTSCP=51,
	VMEXIT_PREEMPTION=52,
	VMEXIT_INVVPID=53,
	VMEXIT_WBINVD=54,
	VMEXIT_XSETBV=55,
	VMEXIT_APICWRITE=56,
	VMEXIT_RDRAND=57,
	VMEXIT_INVPCID=58,
	VMEXIT_VMFUNC=59
};

#pragma pack(push,1)

typedef struct
{
	ULONG RevisionId;
	ULONG VmxRegionSize:13;
	ULONG Reserved1:3;
	ULONG PhysicalWidth:1;
	ULONG DualMonitor:1;
	ULONG MemoryType:4;
	ULONG VmExitInformation:1;
	ULONG MayDefBeCleared:1;
	ULONG Reserved2:8;
} VMX_BASIC_MSR;

typedef struct
{
	ULONG NumberOfControlRegister:4;
	ULONG AccessType:2;
	ULONG LMSWOperandType:1;
	ULONG Reserved1:1;
	ULONG GPRegister:4;
	ULONG Reserved2:4;
	ULONG LMSWSourceData:16;
#if defined _M_AMD64
	ULONG Reserved3;
#endif
} MOV_CR_QUALIFICATION;

typedef struct
{
	ULONG Vector:8;
	ULONG Type:3;
	ULONG ValidErrorCode:1;
	ULONG NMIUnblocking:1;
	ULONG Reserved:18;
	ULONG Valid:1;
} INTERRUPTION_INFORMATION;

#pragma pack(pop)

#endif //VMX_H