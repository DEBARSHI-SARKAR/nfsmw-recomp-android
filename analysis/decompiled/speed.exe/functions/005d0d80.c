/* speed.exe 005d0d80 FUN_005d0d80; analysis pseudocode, not buildable source.
 * calls 005cab00 FUN_005cab00
 * calls 004fa510 FUN_004fa510
 */

void __thiscall FUN_005d0d80(int param_1,float param_2,int param_3)

{
  undefined *puVar1;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  local_4c = param_2 * param_2;
  local_48 = param_2;
  local_44 = 0x3f800000;
  local_50 = local_4c * param_2;
  puVar1 = &DAT_008a3280;
  if (*(int *)(param_1 + 0x60) == 1) {
    puVar1 = &DAT_008a32c0;
  }
  FUN_005cab00(puVar1,param_1,local_40);
  FUN_004fa510(&local_50,local_40,param_3);
  *(undefined4 *)(param_3 + 0xc) = 0x3f800000;
  return;
}

