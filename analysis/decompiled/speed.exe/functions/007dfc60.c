/* speed.exe 007dfc60 __Strftime_mt; analysis pseudocode, not buildable source.
 * calls 007dfe40 __expandtime
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __Strftime_mt
   
   Library: Visual Studio 2003 Debug */

int __Strftime_mt(int param_1,byte *param_2,uint param_3,byte *param_4,undefined4 param_5,
                 int param_6)

{
  code *pcVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  int local_18;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  if (param_6 == 0) {
    local_18 = *(int *)(param_1 + 0x4c);
  }
  else {
    local_18 = param_6;
  }
  if (param_3 == 0) {
    iVar3 = __CrtDbgReport(2,"strftime.c",0x147,0,
                           "(\"Zero length output buffer passed to strftime\",0)");
    if (iVar3 != 1) {
      return 0;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  local_10 = param_3;
  do {
    if ((local_10 == 0) || (*param_4 == 0)) goto LAB_007dfdfc;
    if (*param_4 == 0x25) {
      bVar4 = param_4[1] == 0x23;
      pbVar2 = param_4 + 1;
      if (bVar4) {
        pbVar2 = param_4 + 2;
      }
      param_4 = pbVar2;
      local_8 = (uint)bVar4;
      iVar3 = __expandtime(param_1,CONCAT31((int3)((uint)&param_2 >> 8),*param_4),param_5,&param_2,
                           &local_10,local_18,local_8);
      if (iVar3 == 0) {
        local_c = 1;
        goto LAB_007dfdfc;
      }
    }
    else {
      if (((*(ushort *)(*(int *)(param_1 + 0x48) + (uint)*param_4 * 2) & 0x8000) != 0) &&
         (1 < local_10)) {
        if (param_4[1] == 0) {
          iVar3 = __CrtDbgReport(2,"strftime.c",0x188,0,
                                 "(\"Invalid MBCS character sequence passed to strftime\",0)");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            iVar3 = (*pcVar1)();
            return iVar3;
          }
          local_c = 1;
LAB_007dfdfc:
          if ((local_c == 0) && (local_10 != 0)) {
            *param_2 = 0;
            return param_3 - local_10;
          }
          if (local_10 == 0) {
            param_2 = param_2 + -1;
          }
          *param_2 = 0;
          return 0;
        }
        *param_2 = *param_4;
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
        local_10 = local_10 - 1;
      }
      *param_2 = *param_4;
      param_2 = param_2 + 1;
      local_10 = local_10 - 1;
    }
    param_4 = param_4 + 1;
  } while( true );
}

