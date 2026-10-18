/* speed.exe 00844120 FUN_00844120; analysis pseudocode, not buildable source.
 * calls 0078af30 FUN_0078af30
 * calls 008440a0 FUN_008440a0
 */

void FUN_00844120(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0078af30(param_1 + 0x1240);
  iVar2 = FUN_008440a0(uVar1,param_1 + 0x1240);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x108) = uVar1;
  }
  return;
}

