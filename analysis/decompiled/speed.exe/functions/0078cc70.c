/* speed.exe 0078cc70 FUN_0078cc70; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 0056bc10 FUN_0056bc10
 * calls 00515e20 FUN_00515e20
 */

void FUN_0078cc70(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_80 [128];
  
  uVar1 = FUN_0056bc10(0xd0ba5d76,param_1);
  FUN_00515e20(local_80,0x80,uVar1);
  FUN_00598970("OL_GameRoom.fng",&DAT_00890978,4,0x417b2601,0x99c73215,0x99c73215,local_80);
  return;
}

