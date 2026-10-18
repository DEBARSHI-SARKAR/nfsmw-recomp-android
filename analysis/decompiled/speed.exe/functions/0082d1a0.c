/* speed.exe 0082d1a0 FUN_0082d1a0; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 00829450 FUN_00829450
 * calls 0082e3e0 FUN_0082e3e0
 * calls 008293c0 FUN_008293c0
 * calls 00829410 FUN_00829410
 */

undefined4 __thiscall FUN_0082d1a0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00829410(param_1);
  if (iVar1 != 0) {
    uVar3 = 0xfffffff8;
    iVar1 = FUN_0082e3e0(param_2);
    if ((((iVar1 != 0) && (puVar2 = (uint *)FUN_0082caa0(param_2), puVar2 != (uint *)0x0)) &&
        (puVar2[0x4b] = (uint)param_3, param_3 != (int *)0x0)) &&
       (iVar1 = FUN_008293c0(*puVar2 & 0xff), iVar1 != 0)) {
      (**(code **)(*param_3 + 0x5c))(puVar2 + 0x3f);
      (**(code **)(*param_3 + 0x60))(puVar2 + 0x1f);
      (**(code **)(*param_3 + 4))(iVar1);
      (**(code **)(*param_3 + 0x30))
                (((int)*(char *)((int)puVar2 + 3) * (int)*(char *)((int)puVar2 + 2)) / 100);
      uVar3 = 0;
    }
    FUN_00829450();
    return uVar3;
  }
  return 0xffffffee;
}

