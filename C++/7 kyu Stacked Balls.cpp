double stack_height_3d(int layers) {
  if (layers == 0) {
    return 0;
  }
  return layers - 0.2929 * (layers - 1);
}
