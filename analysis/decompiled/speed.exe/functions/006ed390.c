/* speed.exe 006ed390 FUN_006ed390; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool FUN_006ed390(undefined4 param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  bVar4 = param_2 != '\0';
  _param_2 = DAT_009377d0 - 0x48;
  if ((-1 < _param_2) && (puVar3 = DAT_0092ca8c, DAT_0092ca8c != DAT_0092ca8c + DAT_0092ca94)) {
    do {
      if (_param_2 < 0) break;
      cVar1 = (**(code **)(*(int *)*puVar3 + 4))();
      if (((cVar1 != '\0') && (piVar2 = (int *)FUN_005d59f0(&LAB_00402830), piVar2 != (int *)0x0))
         && (cVar1 = (**(code **)(*piVar2 + 0x58))(), cVar1 != '\0')) {
        (**(code **)(*piVar2 + 8))();
        _param_2 = _param_2 + -1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != DAT_0092ca8c + DAT_0092ca94);
  }
  return DAT_009377d0 < (-(uint)bVar4 & 0x18) + 0x48;
}

