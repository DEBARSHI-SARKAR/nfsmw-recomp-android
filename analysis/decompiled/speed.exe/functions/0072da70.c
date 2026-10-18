/* speed.exe 0072da70 FUN_0072da70; analysis pseudocode, not buildable source.
 * calls 0072bf80 FUN_0072bf80
 */

int __fastcall FUN_0072da70(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x844) + 0xd);
  *(undefined1 *)(*(int *)(param_1 + 0x844) + 0xd) = 0;
  if (cVar1 != '\0') {
    uVar2 = FUN_0072bf80(0);
    *(undefined4 *)(param_1 + 0x840) = uVar2;
  }
  return *(int *)(param_1 + 0x83c) - *(int *)(param_1 + 0x840);
}

