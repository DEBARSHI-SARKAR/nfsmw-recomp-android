/* speed.exe 0075c660 FUN_0075c660; analysis pseudocode, not buildable source.
 * calls 0073a690 FUN_0073a690
 * calls 0075bed0 FUN_0075bed0
 */

void __thiscall FUN_0075c660(int param_1,int param_2)

{
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *(undefined1 *)(param_2 + 0xc) = 2;
    FUN_0073a690(param_2 + 0x24,*(undefined4 *)(param_2 + 0x20));
  }
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *(undefined1 *)(param_2 + 0xd) = 2;
    FUN_0073a690(param_2 + 0x184,*(undefined4 *)(param_2 + 0x180));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0075bed0();
  return;
}

