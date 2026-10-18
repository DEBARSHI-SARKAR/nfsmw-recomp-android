/* speed.exe 00576410 FUN_00576410; analysis pseudocode, not buildable source.
 */

void FUN_00576410(int param_1,byte param_2)

{
  char cVar1;
  
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) != 0) {
      cVar1 = *(char *)((int)&DAT_0091cd10 + param_1 * 8 + 2) + '\x01';
      *(char *)((int)&DAT_0091cd10 + param_1 * 8 + 2) = cVar1;
      if ('\x03' < cVar1) {
        *(undefined1 *)((int)&DAT_0091cd10 + param_1 * 8 + 2) = 0;
        *(undefined1 *)((int)&DAT_0091cd10 + param_1 * 8 + 1) = 0xff;
      }
    }
  }
  else {
    cVar1 = *(char *)((int)&DAT_0091cd14 + param_1 * 8 + 2) + '\x01';
    *(char *)((int)&DAT_0091cd14 + param_1 * 8 + 2) = cVar1;
    if ('\x03' < cVar1) {
      *(undefined1 *)((int)&DAT_0091cd14 + param_1 * 8 + 2) = 0;
      *(undefined1 *)((int)&DAT_0091cd14 + param_1 * 8 + 1) = 0xff;
      return;
    }
  }
  return;
}

