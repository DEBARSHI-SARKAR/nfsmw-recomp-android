/* speed.exe 007f86e9 FUN_007f86e9; analysis pseudocode, not buildable source.
 * calls 0085e770 _strtol
 */

undefined4 FUN_007f86e9(long *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  long lVar3;
  int *unaff_EBX;
  uint *unaff_ESI;
  uint uVar4;
  char *local_c;
  undefined1 local_5;
  
  uVar4 = 0;
  local_5 = 9;
  if (*unaff_ESI != 0) {
    do {
      cVar1 = *(char *)(*unaff_EBX + uVar4);
      if ((cVar1 == '\t') || (cVar1 == '\n')) {
        puVar2 = (undefined1 *)(*unaff_EBX + uVar4);
        local_5 = *puVar2;
        *puVar2 = 0;
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *unaff_ESI);
  }
  lVar3 = _strtol((char *)*unaff_EBX,&local_c,10);
  *unaff_ESI = *unaff_ESI + (*unaff_EBX - (int)local_c);
  if (uVar4 != *unaff_ESI) {
    *(undefined1 *)(uVar4 + *unaff_EBX) = local_5;
  }
  if (local_c != (char *)*unaff_EBX) {
    *param_1 = lVar3;
    return 1;
  }
  return 0;
}

