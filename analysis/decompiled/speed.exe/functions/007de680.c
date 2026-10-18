/* speed.exe 007de680 __ld12cvt; analysis pseudocode, not buildable source.
 * calls 007de4d0 __CopyMan
 * calls 007de590 __ShrMan
 * calls 007de520 __FillZeroMan
 * calls 007de550 __IsZeroMan
 * calls 007de3f0 __RoundMan
 */

/* Library Function - Single Match
    __ld12cvt
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

undefined4 __ld12cvt(ushort *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 local_34 [16];
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = (param_1[5] & 0x7fff) - 0x3fff;
  local_18 = param_1[5] & 0x8000;
  local_24 = *(uint *)(param_1 + 3);
  local_20 = *(uint *)(param_1 + 1);
  local_1c = (uint)*param_1 << 0x10;
  if (local_10 == -0x3fff) {
    local_8 = 0;
    iVar1 = __IsZeroMan(&local_24);
    if (iVar1 == 0) {
      __FillZeroMan(&local_24);
      local_c = 2;
    }
    else {
      local_c = 0;
    }
  }
  else {
    __CopyMan(local_34,&local_24);
    iVar1 = __RoundMan(&local_24,param_3[2]);
    if (iVar1 != 0) {
      local_10 = local_10 + 1;
    }
    if (local_10 < param_3[1] - param_3[2]) {
      __FillZeroMan(&local_24);
      local_8 = 0;
      local_c = 2;
    }
    else if (param_3[1] < local_10) {
      if (local_10 < *param_3) {
        local_8 = local_10 + param_3[5];
        local_24 = local_24 & 0x7fffffff;
        __ShrMan(&local_24,param_3[3]);
        local_c = 0;
      }
      else {
        __FillZeroMan(&local_24);
        local_24 = local_24 | 0x80000000;
        __ShrMan(&local_24,param_3[3]);
        local_8 = *param_3 + param_3[5];
        local_c = 1;
      }
    }
    else {
      iVar1 = param_3[1] - local_10;
      __CopyMan(&local_24,local_34,iVar1);
      __ShrMan(&local_24,iVar1);
      __RoundMan(&local_24,param_3[2]);
      __ShrMan(&local_24,param_3[3] + 1);
      local_8 = 0;
      local_c = 2;
    }
  }
  uVar2 = local_8 << (0x20U - ((char)param_3[3] + '\x01') & 0x1f) | local_24 |
          -(uint)(local_18 != 0) & 0x80000000;
  if (param_3[4] == 0x40) {
    param_2[1] = uVar2;
    *param_2 = local_20;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = uVar2;
  }
  return local_c;
}

