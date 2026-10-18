/* speed.exe 007415d0 FUN_007415d0; analysis pseudocode, not buildable source.
 * calls 0078a540 FUN_0078a540
 * calls 0078a310 FUN_0078a310
 */

void __thiscall FUN_007415d0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 8 + param_2 * 4) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    iVar1 = *(int *)(param_1 + 8 + param_2 * 4);
    *(int *)(param_1 + 4) = iVar1;
    *(char *)(iVar1 + 0x1148) = (char)param_2;
  }
  iVar1 = DAT_0091cf90;
  FUN_0078a310(*(undefined1 *)(DAT_0091cf90 + 0x168),8);
  FUN_0078a310(*(undefined1 *)(iVar1 + 0x143),1);
  FUN_0078a310(*(undefined1 *)(iVar1 + 0x15f),1);
  FUN_0078a310(*(undefined1 *)(iVar1 + 0x142),1);
  FUN_0078a310(*(undefined1 *)(iVar1 + 0x191),8);
  FUN_0078a310(*(undefined1 *)(iVar1 + 400),0x10);
  FUN_0078a310(*(undefined1 *)(iVar1 + 0x192),8);
  FUN_0078a540(*(undefined4 *)(iVar1 + 0x194));
  FUN_0078a310(0,8);
  return;
}

