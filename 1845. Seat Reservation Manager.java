// Design a system that manages the reservation state of n seats that are numbered from 1 to n.

// Implement the SeatManager class:

// SeatManager(int n) Initializes a SeatManager object that will manage n seats numbered from 1 to n. All seats are initially available.
// int reserve() Fetches the smallest-numbered unreserved seat, reserves it, and returns its number.
// void unreserve(int seatNumber) Unreserves the seat with the given seatNumber.

// Example 1:

// Input
// ["SeatManager", "reserve", "reserve", "unreserve", "reserve", "reserve", "reserve", "reserve", "unreserve"]
// [[5], [], [], [2], [], [], [], [], [5]]
// Output
// [null, 1, 2, null, 2, 3, 4, 5, null]

class SeatManager {

    private final Queue<Integer> seats;
    private int smallest;

    public SeatManager(int n) {
        seats = new PriorityQueue<>();
        smallest = 0;
    }

    public int reserve() {
        if (seats.isEmpty()) {
            smallest++;
            return smallest;
        } else {
            return seats.poll();
        }
    }

    public void unreserve(int seatNumber) {
        seats.offer(seatNumber);
    }
}

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager obj = new SeatManager(n);
 * int param_1 = obj.reserve();
 * obj.unreserve(seatNumber);
 */
