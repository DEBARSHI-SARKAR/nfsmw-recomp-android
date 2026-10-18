/* speed.exe 00699cc0 FUN_00699cc0; analysis pseudocode, not buildable source.
 * calls 004048c0 FUN_004048c0
 * calls 0077aa30 FUN_0077aa30
 * calls 0068b8b0 FUN_0068b8b0
 * calls 00487690 FUN_00487690
 */

void __fastcall FUN_00699cc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined1 local_108 [264];
  
  uVar1 = **(undefined4 **)(param_1 + 0x78);
  FUN_004048c0();
  FUN_00487690();
  iVar2 = *(int *)(param_1 + 0xec);
  for (puVar3 = *(undefined4 **)(param_1 + 0x110); puVar3 != (undefined4 *)(param_1 + 0x110);
      puVar3 = (undefined4 *)*puVar3) {
    if ((((puVar3[0x11] & 1) != 0) && ((puVar3[0x11] & 8) == 0)) &&
       (cVar4 = FUN_0068b8b0(uVar1,local_108), cVar4 != '\0')) {
      FUN_0077aa30(local_108,iVar2 + 0x3c,param_1 + 100,puVar3);
    }
  }
  return;
}

