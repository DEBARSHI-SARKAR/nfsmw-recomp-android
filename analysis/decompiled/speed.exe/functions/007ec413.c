/* speed.exe 007ec413 FUN_007ec413; analysis pseudocode, not buildable source.
 * calls 007ec3ea FUN_007ec3ea
 * calls 007ecd3d FUN_007ecd3d
 */

char FUN_007ec413(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_007ecd3d();
  do {
    cVar1 = FUN_007ec3ea(param_1);
    if (cVar1 != '\0') {
      return cVar1;
    }
  } while ((param_2 == 0) || (iVar3 = FUN_007ecd3d(), iVar3 <= iVar2 + param_2));
  return '\0';
}

