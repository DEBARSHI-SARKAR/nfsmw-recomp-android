/* speed.exe 0044b040 FUN_0044b040; analysis pseudocode, not buildable source.
 * calls 00789870 FUN_00789870
 * calls 0045e1a0 FUN_0045e1a0
 * calls 00444fe0 FUN_00444fe0
 * calls 005d59f0 FUN_005d59f0
 * calls 0045ecf0 FUN_0045ecf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044b040(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [48];
  undefined1 local_20 [4];
  float local_1c;
  
  FUN_00444fe0(local_50,*(int *)(param_3 + 0x2c) + 0x40);
  FUN_0045ecf0(local_50,param_1 + 0x50,local_50);
  FUN_0045ecf0(local_50,param_1 + 0x90,local_50);
  FUN_0045e1a0(local_50,local_50);
  local_5c = 0.0;
  local_58 = 0;
  local_54 = 3;
  cVar1 = FUN_00789870(local_20,&local_5c,0);
  if (cVar1 != '\0') {
    local_1c = local_5c + _DAT_00890da4;
  }
  local_58 = CONCAT31(local_58._1_3_,(&DAT_0090dba8)[param_2 * 4] == 0);
  piVar2 = (int *)FUN_005d59f0(&LAB_00445650);
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x18))(local_50,local_58,param_4);
    if (cVar1 == '\0') {
      (&DAT_0090dba8)[param_2 * 4] = 0xffffffff;
    }
  }
  (&DAT_0090dba8)[param_2 * 4] = (&DAT_0090dba8)[param_2 * 4] + 1;
  return;
}

