bool can_eat_ghost(bool power_pellet_active, bool touching_a_ghost)
{
    return power_pellet_active && touching_a_ghost;
}

bool scored (bool touching_power_pellet, bool touching_a_dot)
{
    return touching_power_pellet || touching_a_dot;
}

bool loses(bool power_pellet_active, bool touching_a_ghost)
{
   return !(touching_a_ghost and power_pellet_active);
}

bool won (bool eaten_all_dots, bool power_pellet_active, bool touching_a_ghost)
{
    return eaten_all_dots && !(loses(power_pellet_active, touching_a_ghost));
}
