/* speed.exe 005141e0 FUN_005141e0; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 004647c0 FUN_004647c0
 * calls 0056bc10 FUN_0056bc10
 */

void __thiscall FUN_005141e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_100 [256];
  
  uVar1 = FUN_0056bc10(param_2,param_3);
  FUN_004647c0(local_100,uVar1);
  uVar1 = FUN_00598970(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x1a294dad,0xca4cb0dd,
                       0xca4cb0dd,local_100);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}

