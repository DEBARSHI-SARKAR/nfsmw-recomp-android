/* speed.exe 00835670 FUN_00835670; analysis pseudocode, not buildable source.
 * calls 00835120 FUN_00835120
 * calls 0083563c FUN_0083563c
 */

undefined4 FUN_00835670(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  pcVar1 = *(code **)(param_1 + 0xc);
  FUN_00835120(*(undefined4 *)(param_1 + 0x14),0);
  *(undefined4 *)(param_1 + 4) = 1;
  uVar2 = (*pcVar1)(uVar2);
  *(undefined4 *)(param_1 + 8) = uVar2;
  FUN_00835120(0,0);
  *(undefined4 *)(param_1 + 4) = 2;
  FUN_0083563c();
  return uVar2;
}

