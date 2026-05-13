#define 1003 0x3eb
#define 1 0x1
#define d -0x1c
#define 'a'4 -0x1f
#define t -0xc
#define e -0x1b

typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef long    sqword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

typedef qword __uint64_t;

typedef sqword __int64_t;

typedef ulong __uintptr_t;

typedef __int64_t int64_t;

typedef int64_t Elf64_Sxword;

typedef __uint64_t uint64_t;

typedef uint64_t Elf64_Addr;

typedef uint64_t Elf64_Xword;

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    Elf64_Addr r_offset;
    Elf64_Xword r_info;
    Elf64_Sxword r_addend;
};

typedef struct ps_strings ps_strings, *Pps_strings;

struct ps_strings {
    char **ps_argvstr;
    int ps_nargvstr;
    char **ps_envstr;
    int ps_nenvstr;
};

typedef void (*fptr_t)(void);

typedef __uintptr_t uintptr_t;

typedef struct _IO_FILE FILE;

typedef uint __gid_t;

typedef void (*__sighandler_t)(int);

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482,
    PT_AARCH64_ARCHEXT=1879048192
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};


// WARNING! conflicting data type names: /ELF/Elf64_Rela - /DWARF/exec_elf.h/Elf64_Rela

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct ElfNote_4_4 ElfNote_4_4, *PElfNote_4_4;

struct ElfNote_4_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte description[4]; // Blob value
};

typedef struct ElfNote_8_4 ElfNote_8_4, *PElfNote_8_4;

struct ElfNote_8_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[8]; // Vendor name
    byte description[4]; // Blob value
};



pointer __DT_INIT_ARRAY;
char *__progname;
undefined _finiarray;
char * *environ;
char[1] empty_string;
ps_strings *__ps_strings;
undefined1[456] __sF;
undefined stop_quitting;
undefined execlp_date_command;
dword fde_200101060;
uchar __finished;
uchar __initialized;
long[8] dwarf_eh_object;

void FUN_2001008e0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __errno(void)

{
  __errno();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int __status)

{
                    // WARNING: Subroutine does not return
  _exit(__status);
}



void __deregister_frame_info(void)

{
  __deregister_frame_info();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void perror(char *__s)

{
  perror(__s);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pause(void)

{
  int iVar1;
  
  iVar1 = pause();
  return iVar1;
}



void __syscall(void)

{
  __syscall();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void __register_frame_info(void)

{
  __register_frame_info();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int execlp(char *__file,char *__arg,...)

{
  int iVar1;
  
  iVar1 = execlp(__file,__arg);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setegid(__gid_t __gid)

{
  int iVar1;
  
  iVar1 = setegid(__gid);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int atexit(__func *__func)

{
  int iVar1;
  
  iVar1 = atexit(__func);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = strerror(__errnum);
  return pcVar1;
}



void _libc_init(void)

{
  _libc_init();
  return;
}



void _start(_func_void *param_1,undefined8 param_2,ps_strings *param_3)

{
                    // WARNING: Subroutine does not return
  ___start(param_1,param_3);
}



// WARNING: Removing unreachable block (ram,0x000200100a64)
// WARNING: Removing unreachable block (ram,0x000200100a78)
// WARNING: Removing unreachable block (ram,0x000200100a8c)
// WARNING: Unknown calling convention -- yet parameter storage is locked

void _finiarray(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x000200100ac8)
// WARNING: Removing unreachable block (ram,0x000200100b00)
// WARNING: Removing unreachable block (ram,0x000200100ad4)

void FUN_200100a9c(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x000200100ac8)
// WARNING: Removing unreachable block (ram,0x000200100b00)
// WARNING: Removing unreachable block (ram,0x000200100ad4)
// WARNING: Unknown calling convention -- yet parameter storage is locked

void fix_iplta(void)

{
                    // Unresolved local var: Elf64_Rela * rela@[???]
                    // Unresolved local var: Elf64_Rela * relalim@[???]
                    // Unresolved local var: uintptr_t relocbase@[???]
                    // Unresolved local var: Elf64_Addr * where@[???]
                    // Unresolved local var: Elf64_Addr target@[???]
  return;
}



// WARNING: Removing unreachable block (ram,0x000200100c64)
// WARNING: Removing unreachable block (ram,0x000200100ba8)
// WARNING: Removing unreachable block (ram,0x000200100bb8)

void ___start(_func_void *cleanup,ps_strings *ps_strings)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  
  if (ps_strings == (ps_strings *)0x0) {
    __syscall(4,2,"ps_strings missing\n",0x13);
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  __progname = *ps_strings->ps_argvstr;
  environ = ps_strings->ps_envstr;
                    // Unresolved local var: char * c@[???]
  if (__progname == (char *)0x0) {
    __progname = empty_string;
  }
  else {
    pcVar3 = *ps_strings->ps_argvstr;
    while (cVar4 = *pcVar3, cVar4 != '\0') {
      while (pcVar3 = pcVar3 + 1, cVar4 == '/') {
        cVar4 = *pcVar3;
        __progname = pcVar3;
        if (cVar4 == '\0') goto joined_r0x000200100c3c;
      }
    }
  }
joined_r0x000200100c3c:
  iVar2 = 0;
  __ps_strings = ps_strings;
  if (cleanup != (_func_void *)0x0) {
    iVar2 = atexit((__func *)cleanup);
  }
  _libc_init(iVar2);
                    // Unresolved local var: fptr_t * f@[???]
  atexit(_finiarray);
                    // Unresolved local var: fptr_t * f@[???]
  lVar5 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar5])();
    bVar1 = lVar5 != 0;
    lVar5 = lVar5 + 1;
  } while (bVar1);
  iVar2 = main();
                    // WARNING: Subroutine does not return
  exit(iVar2);
}



void execlp_date_command(void)

{
  char str [8];
  char *cmd_char;
  char *next_str_ptr;
  
  str[0] = d;
  str[1] = '\xe1';
  str[2] = t;
  str[3] = e;
                    // After decoding script
                    // 
  str[4] = 0;
  printf("\nProcess terminated at: ");
  fflush((FILE *)(__sF + 0x98));
  cmd_char = str;
                    // negative bits are weird.
                    // all this does is remove the highest bit of that negative hex
                    // 
  while (*cmd_char != '\0') {
    next_str_ptr = cmd_char + 1;
    *cmd_char = *cmd_char + -0x80;
    cmd_char = next_str_ptr;
  }
                    // Uses $PATH on system
                    // 
  execlp(str,str,0);
  perror("execlp");
  return;
}



int stop_quitting(void)

{
  int str;
  
  str = puts("\nDon\'t you wish you could just QUIT me?");
  return str;
}



void main(void)

{
  int groupid_set_status;
  int *errno;
  char *err_str;
  __sighandler_t sigint_handler;
  
  groupid_set_status = setegid(1003);
  if (groupid_set_status != 0) {
    errno = (int *)__errno();
    err_str = strerror(*errno);
    fprintf((FILE *)(__sF + 0x130),"Unable to setegid: %s\n",err_str);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  sigint_handler = signal(2,stop_quitting);
  if (sigint_handler == (__sighandler_t)18446744073709551615) {
    errno = (int *)__errno();
    err_str = strerror(*errno);
    fprintf((FILE *)(__sF + 0x130),"Unable to establish signal handler: %s\n",err_str);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  sigint_handler = signal(0x12,stop_quitting);
  if (sigint_handler == (__sighandler_t)18446744073709551615) {
    errno = (int *)__errno();
    err_str = strerror(*errno);
    fprintf((FILE *)(__sF + 0x130),"Unable to establish signal handler: %s\n",err_str);
                    // WARNING: Subroutine does not return
    exit(1);
  }
                    // Send a SIGQUIT
  sigint_handler = signal(3,execlp_date_command);
  if (sigint_handler == (__sighandler_t)0xffffffffffffffff) {
    errno = (int *)__errno();
    err_str = strerror(*errno);
    fprintf((FILE *)(__sF + 0x130),"Unable to establish signal handler: %s\n",err_str);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  do {
    pause();
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __do_global_dtors_aux(void)

{
  if (__do_global_dtors_aux::__finished != '\0') {
    return;
  }
  __do_global_dtors_aux::__finished = '\x01';
  __deregister_frame_info(&fde_200101060);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __do_global_ctors_aux(void)

{
  if (__do_global_ctors_aux::__initialized != '\0') {
    return;
  }
  __do_global_ctors_aux::__initialized = '\x01';
  __register_frame_info(&fde_200101060,dwarf_eh_object);
  return;
}


