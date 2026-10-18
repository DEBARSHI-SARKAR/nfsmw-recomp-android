/* speed.exe 005ceb10 FUN_005ceb10; analysis pseudocode, not buildable source.
 * calls 005ce3c0 FUN_005ce3c0
 */

void __fastcall FUN_005ceb10(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = param_1 + 3;
  puVar3 = param_1;
  if (param_1 < puVar2) {
    do {
      uVar1 = *puVar3;
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + -1;
    } while (puVar3 < puVar2);
  }
  FUN_005ce3c0(param_1 + 4,6,1,0,1,1,1,2,1,3,1,4,0x1b,5);
  puVar2 = param_1 + 8;
  puVar3 = param_1 + 0xb;
  if (puVar2 < puVar3) {
    do {
      uVar1 = *puVar2;
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + -1;
    } while (puVar2 < puVar3);
  }
  puVar2 = param_1 + 0xc;
  param_1 = param_1 + 0xf;
  if (puVar2 < param_1) {
    do {
      uVar1 = *puVar2;
      *puVar2 = *param_1;
      puVar2 = puVar2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + -1;
    } while (puVar2 < param_1);
  }
  return;
}

