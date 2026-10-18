/* speed.exe 006277d0 FUN_006277d0; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 00735840 FUN_00735840
 * calls 007c4b80 FUN_007c4b80
 * calls 00734fe0 FUN_00734fe0
 */

void __thiscall FUN_006277d0(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_009b0fa0 == 5) {
    FUN_00735840();
    uVar2 = FUN_007c4b80();
    cVar1 = FUN_00734fe0();
    if (cVar1 == '\0') {
      FUN_006e8de0();
      uVar3 = FUN_007c4b80();
      *(undefined4 *)(param_1 + 0x14) = uVar3;
    }
    *param_2 = uVar2;
    return;
  }
  *param_2 = DAT_00925b14;
  return;
}

