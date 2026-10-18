/* speed.exe 0056e840 FUN_0056e840; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 */

void __fastcall FUN_0056e840(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  *param_1 = 0x4d;
  param_1[1] = 0x57;
  param_1[2] = 0x2d;
  pcVar3 = param_1 + 3;
  uVar2 = 0;
  do {
    if ((uVar2 & 1) == 0) {
      cVar1 = FUN_0045da30(10);
      cVar1 = cVar1 + '0';
    }
    else {
      cVar1 = FUN_0045da30(0x1a);
      cVar1 = cVar1 + 'A';
    }
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xb);
  param_1[0xb] = 0;
  return;
}

