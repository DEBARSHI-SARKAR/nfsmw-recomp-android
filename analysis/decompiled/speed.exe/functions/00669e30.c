/* speed.exe 00669e30 FUN_00669e30; analysis pseudocode, not buildable source.
 * calls 00669d70 FUN_00669d70
 * calls 006e8de0 FUN_006e8de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00669e30(int param_1,float param_2,float param_3,int param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  
  FUN_006e8de0();
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x74))();
  if (iVar2 != 0) {
    if (param_4 == 1) {
      if (param_5 != (int *)0x0) {
        param_2 = param_2 * _DAT_008a94b4;
        FUN_00669d70(0xd59062c8,param_2);
        cVar1 = (**(code **)(*param_5 + 0x24))();
        if (cVar1 != '\0') {
          FUN_00669d70(0x2f698829,param_2);
        }
        iVar2 = (**(code **)(*param_5 + 4))();
        if (iVar2 == 1) {
          FUN_00669d70(0x80b88c1d,param_2);
        }
      }
    }
    else {
      if (param_4 == 2) {
        FUN_00669d70(0x7ebe81c0,param_3 * _DAT_008a94b4);
        return;
      }
      if (param_4 == 3) {
        FUN_00669d70(0x2bf74e61,param_3 * _DAT_00890cd4);
        return;
      }
    }
  }
  return;
}

