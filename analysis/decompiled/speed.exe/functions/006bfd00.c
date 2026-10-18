/* speed.exe 006bfd00 FUN_006bfd00; analysis pseudocode, not buildable source.
 * calls 006bdb50 FUN_006bdb50
 * calls 0045ded0 FUN_0045ded0
 * calls 007e7d5e D3DXMatrixMultiply
 */

void FUN_006bfd00(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  uVar1 = FUN_0045ded0(((undefined4 *)*param_1)[2],*(undefined4 *)*param_1);
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  FUN_006bdb50(local_50,uVar1);
  D3DXMatrixMultiply(&local_90,&local_90,local_50);
  *(int **)(param_2 + 0x80) = param_1;
  return;
}

