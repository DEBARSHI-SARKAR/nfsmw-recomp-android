/* speed.exe 0056dd20 FUN_0056dd20; analysis pseudocode, not buildable source.
 * calls 005dce60 FUN_005dce60
 * calls 005e9b60 FUN_005e9b60
 * calls 005e9b80 FUN_005e9b80
 * calls 005e9ae0 FUN_005e9ae0
 * calls 005e9a70 FUN_005e9a70
 * calls 005e9a90 FUN_005e9a90
 * calls 005dce50 FUN_005dce50
 */

void FUN_0056dd20(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    FUN_005e9b60(*(undefined1 *)(param_2 + 0xb));
    FUN_005e9b80(*(undefined1 *)(param_2 + 0xc));
    if (*(char *)(param_2 + 0xc) != '\0') {
      *(uint *)(param_1 + 0x20) = (uint)*(byte *)(param_2 + 9);
    }
    FUN_005e9ae0(*(undefined1 *)(param_2 + 8));
    FUN_005e9a70(*(undefined1 *)(param_2 + 4));
    FUN_005dce60(*(undefined1 *)(param_2 + 7));
    cVar1 = *(char *)(param_2 + 10);
    if (cVar1 == '\x01') {
      uVar2 = 10;
    }
    else if (cVar1 == '\x02') {
      uVar2 = 0x1e;
    }
    else if (cVar1 == '\x03') {
      uVar2 = 0x32;
    }
    else {
      uVar2 = 0;
    }
    FUN_005e9a90(uVar2);
    FUN_005dce50(*(char *)(param_2 + 5) == '\x01');
  }
  return;
}

