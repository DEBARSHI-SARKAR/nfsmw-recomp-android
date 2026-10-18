/* speed.exe 007c6810 __heap_alloc_dbg; analysis pseudocode, not buildable source.
 * calls 007d4aa0 _memset
 * calls 007d2670 __CrtDbgReport
 * calls 007d4c50 FUN_007d4c50
 * calls 007c7a10 __CrtCheckMemory
 * calls 007d4b80 __heap_alloc_base
 */

/* Library Function - Single Match
    __heap_alloc_dbg
   
   Library: Visual Studio 2003 Debug */

undefined4 * __heap_alloc_dbg(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  bVar2 = false;
  if (DAT_009baa14 != 0) {
    if (DAT_009baa04 == DAT_009baa14 + -1) {
      iVar4 = __CrtCheckMemory();
      if ((iVar4 == 0) &&
         (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x15a,0,"_CrtCheckMemory()"), iVar4 == 1)) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
      DAT_009baa04 = 0;
    }
    else {
      DAT_009baa04 = DAT_009baa04 + 1;
    }
  }
  iVar4 = DAT_00906304;
  if ((DAT_00906308 != -1) && (DAT_00906304 == DAT_00906308)) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  iVar6 = (*(code *)PTR_FUN_00906cc0)(1,0,param_1,param_2,DAT_00906304,param_3,param_4);
  if (iVar6 == 0) {
    if (param_3 == 0) {
      iVar4 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"Client hook allocation failure.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    else {
      iVar4 = __CrtDbgReport(0,0,0,0,"Client hook allocation failure at file %hs line %d.\n",param_3
                             ,param_4);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (((param_2 & 0xffff) != 2) && ((DAT_00906300 & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < 0xffffffe1) && (param_1 + 0x24 < 0xffffffe1)) {
      if (((((param_2 & 0xffff) != 4) && (param_2 != 1)) && ((param_2 & 0xffff) != 2)) &&
         ((param_2 != 3 &&
          (iVar6 = __CrtDbgReport(1,0,0,0,&DAT_008941f8,
                                  "Error: memory allocation: bad memory block type.\n"), iVar6 == 1)
          ))) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
      puVar5 = (undefined4 *)__heap_alloc_base(param_1 + 0x24);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        DAT_00906304 = DAT_00906304 + 1;
        if (bVar2) {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0xfedcbabc;
          puVar5[4] = param_1;
          puVar5[5] = 3;
          puVar5[6] = 0;
        }
        else {
          DAT_009ba9fc = DAT_009ba9fc + param_1;
          DAT_009baa10 = DAT_009baa10 + param_1;
          if (DAT_009baa08 < DAT_009baa10) {
            DAT_009baa08 = DAT_009baa10;
          }
          puVar3 = puVar5;
          if (DAT_009baa0c != (undefined4 *)0x0) {
            DAT_009baa0c[1] = puVar5;
            puVar3 = DAT_009baa00;
          }
          DAT_009baa00 = puVar3;
          *puVar5 = DAT_009baa0c;
          puVar5[1] = 0;
          puVar5[2] = param_3;
          puVar5[3] = param_4;
          puVar5[4] = param_1;
          puVar5[5] = param_2;
          puVar5[6] = iVar4;
          DAT_009baa0c = puVar5;
        }
        _memset(puVar5 + 7,(uint)DAT_0090630c,4);
        _memset((void *)((int)puVar5 + param_1 + 0x20),(uint)DAT_0090630c,4);
        _memset(puVar5 + 8,(uint)DAT_0090630e,param_1);
        puVar5 = puVar5 + 8;
      }
    }
    else {
      iVar4 = __CrtDbgReport(1,0,0,0,"Invalid allocation size: %Iu bytes.\n",param_1);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
      puVar5 = (undefined4 *)0x0;
    }
  }
  return puVar5;
}

