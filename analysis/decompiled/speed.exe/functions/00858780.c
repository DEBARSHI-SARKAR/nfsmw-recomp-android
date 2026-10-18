/* speed.exe 00858780 FUN_00858780; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 0078af60 thunk_FUN_004655f0
 * calls 008586f0 FUN_008586f0
 * calls 0078af30 FUN_0078af30
 */

undefined4 FUN_00858780(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    FUN_0084af40(*param_1);
    *param_1 = 0;
  }
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(iVar2);
    param_1[1] = 0;
  }
  param_1[0x46] = 0;
  param_1[0x47] = 1;
  if (param_2 == 0) {
    if (param_1[0x48] != 0) {
      thunk_FUN_004655f0(param_1[0x48]);
      param_1[0x48] = 0;
    }
  }
  else if (param_1[0x48] == 0) {
    puVar1 = (undefined4 *)FUN_0078af30(0x88c0);
    param_1[0x48] = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      for (iVar2 = 0x2230; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      FUN_008586f0(0,0,param_1[0x48] + 0x86bc);
    }
  }
  puVar1 = (undefined4 *)param_1[0x48];
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x206d] = 0x10;
    iVar2 = 0;
    do {
      *(char *)((int)puVar1 + iVar2 + 0x81b8) = (char)iVar2 + '0';
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)puVar1[0x206d]);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[0x1002] = 0;
    puVar1[0x1003] = 0;
    puVar1[0x1004] = 0;
    puVar1[0x2006] = 0;
    puVar1[0x2007] = 0;
    puVar1[0x2009] = 0;
    puVar1[0x202a] = 0;
    puVar1[0x204b] = 0;
  }
  if ((param_2 != 0) && (puVar1 == (undefined4 *)0x0)) {
    return 0xfffffff8;
  }
  return 0;
}

