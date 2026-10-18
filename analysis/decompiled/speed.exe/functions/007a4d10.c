/* speed.exe 007a4d10 FUN_007a4d10; analysis pseudocode, not buildable source.
 * calls 0056f100 FUN_0056f100
 */

undefined4 __thiscall FUN_007a4d10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
  return *(undefined4 *)(iVar1 + 0x118 + param_2 * 4);
}

