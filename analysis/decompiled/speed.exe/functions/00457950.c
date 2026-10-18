/* speed.exe 00457950 FUN_00457950; analysis pseudocode, not buildable source.
 * calls 00457890 FUN_00457890
 */

undefined4 __fastcall FUN_00457950(int param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      cVar1 = FUN_00457890(uVar2);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x34));
  }
  return 0;
}

