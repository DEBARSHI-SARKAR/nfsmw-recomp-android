/* speed.exe 006075e0 FUN_006075e0; analysis pseudocode, not buildable source.
 * calls 00613eb0 FUN_00613eb0
 * calls 00606b60 FUN_00606b60
 */

void __fastcall FUN_006075e0(undefined4 param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  puVar2 = *(undefined4 **)(unaff_ESI + 8);
  *puVar2 = 4;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00613eb0();
  puVar2[1] = uVar3;
  if (*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 8) < 9) {
    FUN_00606b60();
  }
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 8;
  return;
}

