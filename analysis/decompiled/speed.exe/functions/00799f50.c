/* speed.exe 00799f50 FUN_00799f50; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00799f50(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_009b93e0 & 1) == 0) {
    DAT_009b93e0 = DAT_009b93e0 | 1;
    puVar2 = &DAT_009b92b4;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    _DAT_009b9338 = 0;
    _DAT_009b933c = 0;
    _DAT_009b9340 = 0;
    _DAT_009b9344 = 0;
    _DAT_009b9348 = 0;
    _DAT_009b934c = 0;
    _DAT_009b9350 = 0;
    _DAT_009b9354 = 0;
    DAT_009b9358 = 0;
    puVar2 = &DAT_009b935c;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_009b3e20;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    _atexit((_func_4879 *)&LAB_0088f060);
  }
  return &DAT_009b92b0;
}

