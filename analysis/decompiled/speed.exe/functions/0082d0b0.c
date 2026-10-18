/* speed.exe 0082d0b0 FUN_0082d0b0; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 00829450 FUN_00829450
 * calls 0082e3e0 FUN_0082e3e0
 * calls 008293c0 FUN_008293c0
 * calls 00829410 FUN_00829410
 * calls 008298f0 FUN_008298f0
 */

int * FUN_0082d0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *local_8;
  
  iVar1 = FUN_00829410();
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  local_8 = (int *)0x0;
  iVar1 = FUN_0082e3e0(param_1);
  if (iVar1 != 0) {
    puVar2 = (uint *)FUN_0082caa0(param_1);
    if (puVar2 != (uint *)0x0) {
      uVar3 = FUN_008298f0(*puVar2 & 0xff);
      iVar1 = (**(code **)(*DAT_009c29ac + 4))(&local_8,param_2,param_3,uVar3);
      if ((local_8 != (int *)0x0) && (-1 < iVar1)) {
        puVar2[0x4b] = (uint)local_8;
        (**(code **)(*local_8 + 0x5c))(puVar2 + 0x3f);
        (**(code **)(*local_8 + 0x60))(puVar2 + 0x1f);
        iVar1 = *local_8;
        uVar3 = FUN_008293c0(*puVar2 & 0xff);
        (**(code **)(iVar1 + 4))(uVar3);
        (**(code **)(*local_8 + 0x30))
                  (((int)*(char *)((int)puVar2 + 3) * (int)*(char *)((int)puVar2 + 2)) / 100);
      }
    }
  }
  FUN_00829450();
  return local_8;
}

